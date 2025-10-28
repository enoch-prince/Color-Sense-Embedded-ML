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
from csv import Error
import os
import pandas as pd
import numpy as np

def fix_rgbw_total(filename: str, output_dir: str):
    """
    Fix absurd values for the Total column of the color data

    Expected raw columns: ['White', 'Red', 'Green', 'Blue', 'Total']
    """
    # Ensure output directory exists
    os.makedirs(output_dir, exist_ok=True)

    # Process each CSV file in the input directory
    if not filename.lower().endswith('.csv'):
        raise Error("File provided is not a CSV file")

    # filepath = os.path.join(input_dir, filename)
    df = pd.read_csv(filename)

    # Ensure required columns exist
    required = {'White', 'Red', 'Green', 'Blue', 'Total'}
    if not required.issubset(df.columns):
        raise ValueError(f"File {filename} missing columns: {required - set(df.columns)}")

    df['Total'] = (df['White'].astype(int) - df['Red'].astype(int)) + (df['White'].astype(int) - df['Green'].astype(int)) + (df['White'].astype(int) - df['Blue'].astype(int))
    # long Total = (long)(Wraw - Rraw) + (long)(Wraw - Graw) + (long)(Wraw - Braw);

    # Save to output directory
    # output_path = os.path.join(output_dir, filename)
    df.to_csv(filename, index=False)
    print(f"Saved transformed data to: {filename}")    


# Command line arguments
parser = argparse.ArgumentParser(description="Feature Engineering for Color Sense")
parser.add_argument('-f',
                    '--file',
                    dest='input',
                    type=str,
                    required=True,
                    help="CSV file to ingest")
parser.add_argument('-o',
                    '--out-dir',
                    dest='out',
                    type=str,
                    required=True,
                    help="Output directory for storing processed csv file")
                    
    
# Parse arguments
args = parser.parse_args()
input_file: str = args.input
out_dir: str = args.out


# (unless ctrl+c is captured)
try:
    
    fix_rgbw_total(input_file, out_dir)

# Look for keyboard interrupt (ctrl+c)
except KeyboardInterrupt:
    print("‼ Exited the program prematurely")