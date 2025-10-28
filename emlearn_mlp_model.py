#!/usr/bin/env python
# coding: utf-8

"""
MLP Classifier
===========================

This example illustrates a Multi-Layer Perceptron Model
"""

import os.path

import emlearn
import numpy
import pandas

# Key thing is to transform the data into integers that fit the
from sklearn.ensemble import RandomForestClassifier
from sklearn.neural_network import MLPClassifier
# from sklearn.preprocessing import MinMaxScaler, LabelEncoder
from sklearn.model_selection import cross_val_score, StratifiedKFold, train_test_split
#from sklearn.metrics import get_scorer
from sklearn.metrics import accuracy_score

from load_data import load_data, prepare_data

try:
    # When executed as regular .py script
    here = os.path.dirname(__file__)
except NameError:
    # When executed as Jupyter notebook / Sphinx Gallery
    here = os.getcwd()


def train_model(data: pandas.DataFrame):

    dataset = prepare_data(data, 'color_label')

    X_train, X_test, Y_train, Y_test = train_test_split(dataset['data'], dataset['target'], test_size=0.30, random_state=3)

    print("X-Train\n------\n", X_train)
    print("Y-Train\n------\n", Y_train)

    # model = RandomForestClassifier(n_estimators=10, max_depth=max_depth, random_state=1)
    model = MLPClassifier(hidden_layer_sizes=(10,10,), max_iter=1000, random_state=1)

    # sanity check performance
    # cv = StratifiedKFold(5, random_state=None, shuffle=False)
    # scores = cross_val_score(model, X_train, Y_train, cv=cv, scoring='accuracy')
    # assert numpy.mean(scores) >= 0.70, (numpy.mean(scores), scores)

    model = model.fit(X_train, Y_train)

    #Y_pred = model.predict_proba(X_test)[:, 1]
    Y_pred = model.predict(X_test)

    print("X-Test\tY-Pred")
    print(X_test[:5], "\t", Y_pred[:5])
    #test_score =  average_precision_score(Y_test, Y_pred, pos_label=pos_label)
    test_score = accuracy_score(Y_test, Y_pred)
    print("Test Score\n----")
    print(test_score)
    assert test_score >= 0.70, test_score

    return model, X_test, Y_test


def convert_to_C_code(model):
    # Do conversion with specified leaf_bits
    c_model = emlearn.convert(model, method='loadable', dtype='float')
    c_model.save(file='ml/ColorSenseModelMLP_EML.h', name="color_sense", include_proba=True)


if __name__ == "__main__":
    color_data = load_data("color_data3")
    model, X_test, Y_test = train_model(color_data)
    convert_to_C_code(model)