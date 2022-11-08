# -*- coding: utf-8 -*-
import numpy as np 
import pandas as pd 
from sklearn.metrics import accuracy_score
from sklearn.model_selection import train_test_split
import pickle

Classifier = pickle.load(open('model.pkl', 'rb'))
y_pred=Classifier.predict([[105,14,50,26,87,6,59]])
print(y_pred)

