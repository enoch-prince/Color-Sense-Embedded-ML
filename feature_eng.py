#!/usr/bin/env python
"""
Feature Engineering Color Data from LDR Color Sense

It ingests the raw color data, preprocesses them and creates new features for each sample.
The new data is formatted as follows:

```
R_NORM,G_NORM,B_NORM,R_G,R_B,G_B,SATURATION,REFLECTANCE,COLORFULNESSS,IS_RED,IS_GREEN,COLOR_LABEL
```

Install dependencies:

    python -m pip install pyserial

Call this script as follows:

    python feature_eng.py
    
Author: Enoch Prince
Date: October 21, 2025
License: Apache-2.0 (apache.org/licenses/LICENSE-2.0)
"""

import argparse
import os
import pandas as pd
import numpy as np


def transform_rgbw_data(input_dir: str, output_dir: str, epsilon: float = 1e-6):
    """
    Reads all CSV files from input_dir, transforms raw RGBW+Total into engineered features,
    and saves the result to output_dir with lowercase column names.

    Expected raw columns: ['White', 'Red', 'Green', 'Blue', 'Total', 'color_label']
    """
    # Ensure output directory exists
    os.makedirs(output_dir, exist_ok=True)

    input_dir_list = os.listdir(input_dir)
    output_dir_list = os.listdir(output_dir)

    # Process each CSV file in the input directory
    for filename in input_dir_list:
        if not filename.lower().endswith('.csv'):
            continue
        if filename[:-3]+"fe.csv" in output_dir_list:
            print(f"file '{filename}' already exits, skipping...")
            continue

        filepath = os.path.join(input_dir, filename)
        df = pd.read_csv(filepath)

        # Ensure required columns exist
        required = {'White', 'Red', 'Green', 'Blue', 'Total', 'color_label'}
        if not required.issubset(df.columns):
            print(f"File {filename} missing required columns: {required - set(df.columns)}")
            print("Fixing it now 🛠")
            df['color_label'] = filename.split(".")[0]

        # Extract raw values
        W = df['White'].astype(float)
        R = df['Red'].astype(float)
        G = df['Green'].astype(float)
        B = df['Blue'].astype(float)
        Total = df['Total'].astype(float)

        # 1. Normalized RGB (chromaticity)
        total_rgb = R + G + B
        r_norm = np.where(total_rgb > 0, R / total_rgb, 0.0)
        g_norm = np.where(total_rgb > 0, G / total_rgb, 0.0)
        b_norm = np.where(total_rgb > 0, B / total_rgb, 0.0)

        # 2. Ratios
        r_g = R / (G + epsilon)
        r_b = R / (B + epsilon)
        g_b = G / (B + epsilon)

        # 3. Saturation
        rgb_max = np.maximum(np.maximum(R, G), B)
        rgb_min = np.minimum(np.minimum(R, G), B)
        saturation = np.where(rgb_max > 0, (rgb_max - rgb_min) / (rgb_max + epsilon), 0.0)

        # 4. White-based features
        reflectance = W / (W + total_rgb + epsilon)
        colorfulness = total_rgb / (W + epsilon)

        # 5. Dominant color (one-hot)
        # Create arrays for one-hot flags
        is_red = ((R >= G) & (R >= B)).astype(int)
        is_green = ((G > R) & (G >= B)).astype(int)
        is_blue = ((B > R) & (B > G)).astype(int)

        # Assemble engineered features
        engineered = pd.DataFrame({
            'r_norm': r_norm,
            'g_norm': g_norm,
            'b_norm': b_norm,
            'r_g': r_g,
            'r_b': r_b,
            'g_b': g_b,
            'saturation': saturation,
            'reflectance': reflectance,
            'colorfulness': colorfulness,  # Note: corrected spelling from "colorfulnesss"
            'is_red': is_red,
            'is_green': is_green,
            'is_blue': is_blue,
            'color_label': df['color_label']  # preserve label
        })

        # Save to output directory
        filename = filename.replace(".csv", ".fe.csv")
        output_path = os.path.join(output_dir, filename)
        engineered.to_csv(output_path, index=False)
        print(f"Saved transformed data to: {output_path}")     

def clamp255(x):
    """Clamp values to [0, 255] and cast to uint8."""
    return np.clip(x, 0, 255).astype(np.uint8)

def transform_rgbw_data_v2(input_dir: str, output_dir: str, epsilon: float = 1e-6):
    """
    Transforms raw sensor CSVs using the embedded-style normalization:
        R8 = 255 - (255 * (White - Red)) / Total
    Then computes feature-engineered columns.

    Expected raw columns: ['White', 'Red', 'Green', 'Blue', 'Total', 'color_label']
    """
    os.makedirs(output_dir, exist_ok=True)

    for filename in os.listdir(input_dir):
        if not filename.lower().endswith('.csv'):
            continue

        filepath = os.path.join(input_dir, filename)
        df = pd.read_csv(filepath)

        required = {'White', 'Red', 'Green', 'Blue', 'Total', 'color_label'}
        if not required.issubset(df.columns):
            print(f"File {filename} missing required columns: {required - set(df.columns)}")
            print("Fixing it now 🛠")
            df['color_label'] = filename.split(".")[0]

        # Use float for safe arithmetic
        W = df['White'].astype(float)
        R_raw = df['Red'].astype(float)
        G_raw = df['Green'].astype(float)
        B_raw = df['Blue'].astype(float)
        Total = df['Total'].astype(float)

        # --- Step 1: Apply embedded-style normalization (like C++) ---
        # Avoid division by zero
        denom = np.where(Total == 0, epsilon, Total)

        R8_f = 255.0 - (255.0 * (W - R_raw)) / denom
        G8_f = 255.0 - (255.0 * (W - G_raw)) / denom
        B8_f = 255.0 - (255.0 * (W - B_raw)) / denom

        R8 = clamp255(R8_f)
        G8 = clamp255(G8_f)
        B8 = clamp255(B8_f)

        # Convert back to float for ratio/saturation math
        R = R8.astype(float)
        G = G8.astype(float)
        B = B8.astype(float)

        # --- Step 2: Feature engineering using R8, G8, B8 ---
        # total_rgb = R + G + B
        # r_norm = np.where(total_rgb > 0, R / total_rgb, 0.0)
        # g_norm = np.where(total_rgb > 0, G / total_rgb, 0.0)
        # b_norm = np.where(total_rgb > 0, B / total_rgb, 0.0)

        r_g = R / (G + epsilon)
        r_b = R / (B + epsilon)
        g_b = G / (B + epsilon)

        rgb_max = np.maximum(np.maximum(R, G), B)
        rgb_min = np.minimum(np.minimum(R, G), B)
        saturation = np.where(rgb_max > 0, (rgb_max - rgb_min) / (rgb_max + epsilon), 0.0)

        # Use original White and Total (or total_rgb?) for reflectance
        # Here, we follow your earlier definition: Reflectance = W / (W + total_rgb)
        reflectance = W / (W + denom + epsilon)
        colorfulness = denom / (W + epsilon)

        # --- Step 3: Dominance (based on R8, G8, B8) ---
        is_red = ((R >= G) & (R >= B)).astype(int)
        is_green = ((G > R) & (G >= B)).astype(int)
        is_blue = ((B > R) & (B > G)).astype(int)

        # --- Assemble output ---
        engineered = pd.DataFrame({
            'r_norm': R,
            'g_norm': G,
            'b_norm': B,
            'r_g': r_g,
            'r_b': r_b,
            'g_b': g_b,
            'saturation': saturation,
            'reflectance': reflectance,
            'colorfulness': colorfulness,
            'is_red': is_red,
            'is_green': is_green,
            'is_blue': is_blue,
            'color_label': df['color_label']
        })

        filename = filename.replace(".csv", ".fe.v2.csv")
        output_path = os.path.join(output_dir, filename)
        engineered.to_csv(output_path, index=False)
        print(f"Saved transformed data to: {output_path}")

# Command line arguments
parser = argparse.ArgumentParser(description="Feature Engineering for Color Sense")
parser.add_argument('-i',
                    '--input-dir',
                    dest='input',
                    type=str,
                    required=True,
                    default=".",
                    help="Input directory to ingest csv files (default = .)")
parser.add_argument('-o',
                    '--out-dir',
                    dest='out',
                    type=str,
                    default="fe_data",
                    help="Output directory for files (default = fe_data)")
                    
    
# Parse arguments
args = parser.parse_args()
input_dir: str = args.input
out_dir: str = args.out

# Make output directory
try:
    os.makedirs(out_dir)
except FileExistsError:
    pass

# Loop forever (unless ctrl+c is captured)
try:
    
    # transform_rgbw_data(input_dir, out_dir)
    transform_rgbw_data_v2(input_dir, out_dir)

# Look for keyboard interrupt (ctrl+c)
except KeyboardInterrupt:
    print("‼ Exited the program prematurely")