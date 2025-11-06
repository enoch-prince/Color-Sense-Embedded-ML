import argparse
import numpy
from sklearn.tree import DecisionTreeRegressor
from sklearn.ensemble import RandomForestRegressor

from sklearn.model_selection import cross_val_score, StratifiedKFold, train_test_split
from sklearn.metrics import r2_score
from micromlgen import port
import emlearn

from load_data import load_data, prepare_data


if __name__ == '__main__':
    # Command line arguments
    parser = argparse.ArgumentParser(description="Regression Modelling using Micromlgen and Emlearn")
    parser.add_argument('-i',
                        '--input-dir',
                        dest='input',
                        type=str,
                        required=True,
                        help="Input directory to ingest csv files (default = .)")
    
    # Parse arguments
    args = parser.parse_args()
    input_dir: str = args.input

    df = load_data(input_dir)
    feature_columns = ['White', 'Red', 'Green', 'Blue', 'Total']
    dataset = prepare_data(df, feature_columns, "color_label")


    #Rescale and convert to integers (quantize)
    X = dataset['data']
    Y = dataset['target']

    # print("Sample\n-----")
    # print(X[0], Y[0], dataset['feature_names'][Y[0]])
    # print(X[100], Y[100], dataset['feature_names'][Y[100]])
    # print(X[-1], Y[-1], dataset['feature_names'][Y[-1]])

    X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size=0.3, random_state=42)

    # print("\nX-train\n-----")
    # print(X_train)
    # print("\nY-train\n-----")
    # print(Y_train)
    # print("\nX-test\n-----")
    # print(X_test)
    # print("\nY-test\n-----")
    # print(Y_test)

    dt_regr = DecisionTreeRegressor(max_depth=10).fit(X_train, Y_train)
    rf_regr = RandomForestRegressor(n_estimators=10, random_state=1).fit(X_train, Y_train)

    # predict model performance
    Y_pred_dt_regr = dt_regr.predict(X_test)
    Y_pred_rf_regr = rf_regr.predict(X_test)

    # sanity check performance
    cv = StratifiedKFold(5, random_state=None, shuffle=False)
    scores = cross_val_score(dt_regr, X_test, Y_test, cv=cv)

    r2_dt = r2_score(Y_test, Y_pred_dt_regr)
    r2_rf = r2_score(Y_test, Y_pred_rf_regr)

    print("Model Sanity Check Score - Decision Tree Regressor\n-----------")
    print(scores)
    print("R2 Score:", r2_dt)
    assert numpy.mean(scores) >= 0.60, numpy.mean(scores)

    cv = StratifiedKFold(5, random_state=None, shuffle=False)
    scores = cross_val_score(rf_regr, X_test, Y_test, cv=cv)

    print("\nModel Sanity Check Score - Random Forest Regressor\n-----------")
    print(scores)
    print("R2 Score:", r2_rf)
    assert numpy.mean(scores) >= 0.60, numpy.mean(scores)
    
    # Using MicroMLGen
    with open('ml/ColorSenseModelDTR.h', 'w') as file:
        file.write(port(dt_regr, classmap={
            index: value for index, value in enumerate(dataset['feature_names'])
        }))
    with open('ml/ColorSenseModelRFR.h', 'w') as file:
        file.write(port(rf_regr, classmap={
            index: value for index, value in enumerate(dataset['feature_names'])
        }))
    
    # Using EMLearn
    cmodel = emlearn.convert(dt_regr, method='inline')
    cmodel.save(file='ml/ColorSenseModelDTR_EML.h', name="color_sense")
    cmodel = emlearn.convert(rf_regr, method='inline')
    cmodel.save(file='ml/ColorSenseModelRFR_EML.h', name="color_sense")
