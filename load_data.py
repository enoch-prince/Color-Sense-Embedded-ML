import os
import pandas


def save_data(out_dir: str, filename: str, data: pandas.DataFrame):
    os.makedirs(out_dir, exist_ok=True)
    output_path = os.path.join(out_dir, filename)
    data.to_csv(output_path, index=False)
    print(f"Saved combined data to: {output_path}")

def load_data(input_dir: str) -> pandas.DataFrame:
    combined_df: pandas.DataFrame

    if "combined_color_data_v2.csv" in os.listdir("data"):
        print("Files already combined. Loading 'combined_color_data_v2.csv' file instead...")
        combined_df = pandas.read_csv("data/combined_color_data_v2.csv")
    else:
        dfs = [pandas.read_csv(os.path.join(input_dir, filename)) for filename in os.listdir(input_dir)]
        combined_df = pandas.concat(dfs, ignore_index=True)
        save_data("data", "combined_color_data_v2.csv", combined_df)
    
    return combined_df

def prepare_data(data: pandas.DataFrame, label_column = 'label', as_frame=False):
    data.reset_index(drop=True, inplace=True)
    # feature_columns = list(set(data.columns) - set([label_column]))
    feature_columns = ['White', 'Red', 'Green', 'Blue', 'Total']
    # print(feature_columns)
    X = data[feature_columns]
    Y = data[label_column]

    # print(X[:5])
    # print("\n")
    # print(Y[:5])

    return {
        "DESCR": "Color Data from a cheap LDR-based sensor",
        "frame": data if as_frame else None,
        "data": X.to_numpy(),
        "target": Y.astype('category').cat.codes.to_numpy(),
        "feature_names": Y.astype('category').unique()
    }

if __name__ == "__main__":
    from pprint import PrettyPrinter

    printer = PrettyPrinter()
    data = load_data("data")
    printer.pprint(data.head())
    print("\n")
    new_data = prepare_data(data, "color_label")
    printer.pprint(new_data)