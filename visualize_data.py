import argparse
import os
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns


# Command line arguments
parser = argparse.ArgumentParser(description="Visualize Color Sense Data")
parser.add_argument('-f',
                    '--csv-file',
                    dest='filename',
                    type=str,
                    required=True,
                    help="Filename of the csv to visualize")
parser.add_argument('-o',
                    '--out-dir',
                    dest='out',
                    type=str,
                    default="plots",
                    help="Output directory for storing the visualization plots (default = plots)")

# Parse arguments
args = parser.parse_args()
filename: str = args.filename
out_dir: str = args.out

src_parts = filename.split("/")
label = src_parts[1].split(".")[0]
os.makedirs(out_dir, exist_ok=True)

# Load data
df = pd.read_csv(filename)

# Add color label (since it's black material)
df['color_label'] = label

# Extract columns
W = df['White'].astype(float)
R_raw = df['Red'].astype(float)
G_raw = df['Green'].astype(float)
B_raw = df['Blue'].astype(float)
Total = df['Total'].astype(float)

# --- Apply embedded-style normalization (like your C++) ---
epsilon = 1e-6
denom = np.where(Total == 0, epsilon, Total)

R8 = np.clip(255 - (255 * (W - R_raw)) / denom, 0, 255)
G8 = np.clip(255 - (255 * (W - G_raw)) / denom, 0, 255)
B8 = np.clip(255 - (255 * (W - B_raw)) / denom, 0, 255)

# Add normalized channels to DataFrame
df['R8'] = R8
df['G8'] = G8
df['B8'] = B8

# --- Plotting ---
plt.figure(figsize=(14, 10))

# 1. Raw RGBW over time (index as pseudo-time)
plt.subplot(2, 3, 1)
plt.plot(df.index, df['Red'], label='Red', color='red', alpha=0.7)
plt.plot(df.index, df['Green'], label='Green', color='green', alpha=0.7)
plt.plot(df.index, df['Blue'], label='Blue', color='blue', alpha=0.7)
plt.plot(df.index, df['White'], label='White', color='gray', alpha=0.7)
plt.title('Raw Sensor Readings Over Time')
plt.xlabel('Sample Index')
plt.ylabel('Raw Value')
plt.legend()

# 2. Normalized R8, G8, B8 over time
plt.subplot(2, 3, 2)
plt.plot(df.index, R8, label='R8', color='red', alpha=0.7)
plt.plot(df.index, G8, label='G8', color='green', alpha=0.7)
plt.plot(df.index, B8, label='B8', color='blue', alpha=0.7)
plt.title('Normalized RGB (R8, G8, B8) Over Time')
plt.xlabel('Sample Index')
plt.ylabel('Normalized (0–255)')
plt.legend()

# 3. Histogram of normalized RGB
plt.subplot(2, 3, 3)
plt.hist(R8, bins=30, alpha=0.6, color='red', label='R8')
plt.hist(G8, bins=30, alpha=0.6, color='green', label='G8')
plt.hist(B8, bins=30, alpha=0.6, color='blue', label='B8')
plt.title('Distribution of Normalized RGB')
plt.xlabel('Value')
plt.ylabel('Frequency')
plt.legend()

# 4. Boxplot of normalized RGB
plt.subplot(2, 3, 4)
sns.boxplot(data=df[['R8', 'G8', 'B8']], palette=['red', 'green', 'blue'])
plt.title('Boxplot of Normalized RGB')

# 5. Scatter: R8 vs G8 (colored by B8)
plt.subplot(2, 3, 5)
plt.scatter(R8, G8, c=B8, cmap='Blues', alpha=0.6)
plt.colorbar(label='B8')
plt.xlabel('R8')
plt.ylabel('G8')
plt.title('R8 vs G8 (color = B8)')

# 6. Correlation heatmap
plt.subplot(2, 3, 6)
corr = df[['White', 'Red', 'Green', 'Blue', 'Total', 'R8', 'G8', 'B8']].corr()
sns.heatmap(corr, annot=True, fmt=".2f", cmap='coolwarm', center=0)
plt.title('Feature Correlation Matrix')

plt.tight_layout()
plt.savefig(os.path.join(out_dir, f"{src_parts[1][:-4]}.png"), dpi=150)
plt.show()
plt.close()
print(f"Saved plot to {out_dir}/{src_parts[1][:-4]}.png")