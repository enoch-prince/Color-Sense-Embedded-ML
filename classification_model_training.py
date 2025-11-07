import os
import pandas as pd
import numpy as np
from sklearn.ensemble import RandomForestClassifier
from sklearn.model_selection import train_test_split
from sklearn.metrics import classification_report, accuracy_score
import emlearn

from load_data import load_fe_data, prepare_data

# ============================
# CONFIGURATION
# ============================
# Input: folder with CSVs named like "black.csv", "red.csv", etc.
RAW_DATA_DIR = "fe_data"  
OUTPUT_MODEL_H = "ColorSenseFEModelRFC_EML.h"
MODEL_NAME = "ColorSenseFEModelRFC_EML"

# Optional: map filenames to standardized labels (e.g., avoid "dark_red" vs "red")
LABEL_MAPPING = {
    # 'filename_prefix': 'canonical_label'
    # e.g.:
    # 'dark_red': 'red',
    # 'scarlet': 'red',
}
# ============================

# def load_and_engineer_data(data_dir):
#     all_data = []
    
#     for fname in os.listdir(data_dir):
#         if not fname.lower().endswith('.csv'):
#             continue
        
#         # Infer label from filename (e.g., "black.2b3eae45a65e.csv" → "black")
#         base = fname.split('.')[0].lower()
#         label = LABEL_MAPPING.get(base, base)
        
#         df = pd.read_csv(os.path.join(data_dir, fname))
#         df['color_label'] = label
#         all_data.append(df)
    
#     if not all_data:
#         raise ValueError(f"No CSV files found in {data_dir}")
    
#     return pd.concat(all_data, ignore_index=True)

# def engineer_features(df):
#     W = df['White'].astype(float)
#     R = df['Red'].astype(float)
#     G = df['Green'].astype(float)
#     B = df['Blue'].astype(float)
#     Total = df['Total'].astype(float)
#     eps = 1e-6

#     # Embedded-style normalization (R8, G8, B8)
#     denom = np.where(Total == 0, eps, Total)
#     R8 = np.clip(255 - (255 * (W - R)) / denom, 0, 255).astype(float)
#     G8 = np.clip(255 - (255 * (W - G)) / denom, 0, 255).astype(float)
#     B8 = np.clip(255 - (255 * (W - B)) / denom, 0, 255).astype(float)

#     total_rgb = R8 + G8 + B8
#     r_norm = np.where(total_rgb > 0, R8 / total_rgb, 0.0)
#     g_norm = np.where(total_rgb > 0, G8 / total_rgb, 0.0)
#     b_norm = np.where(total_rgb > 0, B8 / total_rgb, 0.0)

#     r_g = R8 / (G8 + eps)
#     r_b = R8 / (B8 + eps)
#     g_b = G8 / (B8 + eps)

#     rgb_max = np.maximum(np.maximum(R8, G8), B8)
#     rgb_min = np.minimum(np.minimum(R8, G8), B8)
#     saturation = np.where(rgb_max > 0, (rgb_max - rgb_min) / (rgb_max + eps), 0.0)

#     reflectance = W / (W + total_rgb + eps)
#     colorfulness = total_rgb / (W + eps)

#     is_red = ((R8 >= G8) & (R8 >= B8)).astype(int)
#     is_green = ((G8 > R8) & (G8 >= B8)).astype(int)
#     is_blue = ((B8 > R8) & (B8 > G8)).astype(int)

#     features = pd.DataFrame({
#         'r_norm': r_norm,
#         'g_norm': g_norm,
#         'b_norm': b_norm,
#         'r_g': r_g,
#         'r_b': r_b,
#         'g_b': g_b,
#         'saturation': saturation,
#         'reflectance': reflectance,
#         'colorfulness': colorfulness,
#         'is_red': is_red,
#         'is_green': is_green,
#         'is_blue': is_blue,
#     })

#     return features, df['color_label']

# ============================
# MAIN PIPELINE
# ============================
if __name__ == "__main__":
    print("🔍 Loading and engineering data...")
    df_raw = load_fe_data(RAW_DATA_DIR)
    feature_columns = ["r_norm","g_norm","b_norm","r_g","r_b","g_b","saturation","reflectance","colorfulness","is_red","is_green","is_blue"]
    dataset = prepare_data(df_raw, feature_columns, 'color_label')
    X, y = dataset['data'], dataset['target']

    print(f"📊 Dataset: {X.shape[0]} samples, {X.shape[1]} features")
    print(f"🎨 Classes: {sorted(dataset['feature_names'])}")

    # Train/test split
    X_train, X_test, y_train, y_test = train_test_split(
        X, y, test_size=0.2, stratify=y, random_state=42
    )

    # Train model (Random Forest — compact & accurate for tabular)
    print("🧠 Training Random Forest...")
    clf = RandomForestClassifier(
        n_estimators=15,      # small forest → small code
        max_depth=10,         # prevent overfitting, reduce size
        random_state=42
    )
    clf.fit(X_train, y_train)

    # Evaluate
    y_pred = clf.predict(X_test)
    acc = accuracy_score(y_test, y_pred)
    print(f"✅ Accuracy: {acc:.2%}")
    print("\n📊 Classification Report:")
    print(classification_report(y_test, y_pred))

    # Export to C using emlearn
    print("\n📦 Converting to C...")
    c_code = emlearn.convert(clf, dtype='float')
    c_code_str = c_code.save(file="tmp/rf_clf.h", name="ColorSenseFEModelRFC_EML")

    # Wrap in header guard & include
    header_content = f'''#ifndef {MODEL_NAME.upper()}_H
#define {MODEL_NAME.upper()}_H

#ifdef __cplusplus
extern "C" {{
#endif

#include <stdint.h>

// Predict color from 12 engineered features (all float)
// Input: float features[12] in order:
//   r_norm, g_norm, b_norm, r_g, r_b, g_b,
//   saturation, reflectance, colorfulness,
//   is_red, is_green, is_blue
// Returns: class index (0..N-1). Map to label using color_class_names[]
int {MODEL_NAME}_predict(const float *features);

// Human-readable class names (in same order as indices)
extern const char* {MODEL_NAME}_class_names[];

#ifdef __cplusplus
}}
#endif

#endif // {MODEL_NAME.upper()}_H
'''

    impl_content = f'''#include "{MODEL_NAME}.h"
{c_code_str}

// Class names — update if you change labels!
const char* {MODEL_NAME}_class_names[] = {{
'''

    # Add class names in order of clf.classes_
    for cls in dataset['feature_names']:
        impl_content += f'    "{cls}",\n'
    impl_content += '};\n'

    # Save files
    with open(f"ml/{MODEL_NAME}.h", "w") as f:
        f.write(header_content)
    
    with open(f"ml/{MODEL_NAME}.c", "w") as f:
        f.write(impl_content)

    print(f"✅ Model exported to: ml/{MODEL_NAME}.h / ml/{MODEL_NAME}.c")
    print(f"📌 To use on MCU: include the .h, call `{MODEL_NAME}_predict(features)`")