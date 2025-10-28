import argparse
import os
import pandas as pd
import numpy
from sklearn.tree import DecisionTreeRegressor
from sklearn.ensemble import RandomForestClassifier
from xgboost import XGBClassifier
# from sklearn.preprocessing import MinMaxScaler
from sklearn.model_selection import cross_val_score, StratifiedKFold
from micromlgen import port

combined_df: pd.DataFrame = None

def load_data(input_dir: str):
    global combined_df

    if "combined_color_data.csv" in os.listdir("data"):
        print("Files already combined. Loading 'combined_color_data.csv' file instead...")
        combined_df = pd.read_csv("data/combined_color_data.csv")
    else:
        dfs = [pd.read_csv(os.path.join(input_dir, filename)) for filename in os.listdir(input_dir)]
        combined_df = pd.concat(dfs, ignore_index=True)
        save_data("data", "combined_color_data.csv", combined_df)

def save_data(out_dir: str, filename: str, data: pd.DataFrame):
    os.makedirs(out_dir, exist_ok=True)
    output_path = os.path.join(out_dir, filename)
    data.to_csv(output_path, index=False)
    print(f"Saved combined data to: {output_path}")

if __name__ == '__main__':
    # Command line arguments
    parser = argparse.ArgumentParser(description="Random Forest Classification using Micromlgen")
    parser.add_argument('-i',
                        '--input-dir',
                        dest='input',
                        type=str,
                        required=True,
                        default=".",
                        help="Input directory to ingest csv files (default = .)")
    
    # Parse arguments
    args = parser.parse_args()
    input_dir: str = args.input

    load_data(input_dir)

    feature_columns = list(set(combined_df.columns) - set(["color_label"]))
    X = combined_df[feature_columns].astype(int)
    # Y = combined_df["color_label"].astype('category')
    Y = combined_df["color_label"].astype('category').cat.codes

    #Rescale and convert to integers (quantize)
    # X = (MinMaxScaler().fit_transform(X) * 127).astype(int)

    # print(X)
    print(Y)
    # regr = DecisionTreeRegressor(max_depth=10, min_samples_leaf=5).fit(X, y)
    # model = RandomForestClassifier(n_estimators=10, max_depth=10, min_samples_leaf=5, random_state=1).fit(X, Y)
    model = XGBClassifier(max_depth=10, random_state=1).fit(X, Y)

    # sanity check performance
    cv = StratifiedKFold(5, random_state=None, shuffle=False)
    scores = cross_val_score(model, X, Y, cv=cv)

    print("Model Sanity Check Score\n-----------")
    print(scores)
    assert numpy.mean(scores) >= 0.60, numpy.mean(scores)
    
    # with open('ml/ColorSenseModelRFC.h', 'w') as file:
    #     file.write(port(model, classmap={
    #         0: 'black', 1: 'blue', 2: 'red', 3: 'white'
    #     }))
    with open('ml/ColorSenseModelXGB.h', 'w') as file:
        file.write(port(model, classmap={
            0: 'black', 1: 'blue', 2: 'red', 3: 'white'
        }, tmp_file='ml/xgboost.json'))
