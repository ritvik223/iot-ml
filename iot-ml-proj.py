import pandas as pd 
data = pd.read_csv("Crop_recommendation.csv")
X=data.drop('label',axis=1)
y=data['label']
from sklearn.model_selection import train_test_split
X_train,X_test,y_train,y_test=train_test_split(X,y,test_size=0.33,shuffle=True,random_state=0)

from everywhereml.sklearn.ensemble import RandomForestClassifier
clf = RandomForestClassifier(n_estimators=10)
from sklearn import preprocessing
label_encoder = preprocessing.LabelEncoder()
# Encode labels in column 'species'.
y_train= label_encoder.fit_transform(y_train)
clf.fit(X_train.values,y_train)
y_pred=clf.predict(X_test.values)
le=label_encoder
print( dict(zip(le.classes_, le.transform(le.classes_))))
file1 = open("classf.txt", "w") 
file1.write(clf.to_arduino(instance_name='blobClassifier'))
file1.close()
print(label_encoder.inverse_transform(y_pred))
print(X_train)
data = pd.read_csv("Fertilizer Prediction.csv")
X=data.drop('Fertilizer Name',axis=1)
y=data['Fertilizer Name']

x_train,y_train=X,y

from sklearn import preprocessing
label_encoder = preprocessing.LabelEncoder()
label_encoder1 = preprocessing.LabelEncoder()
label_encoder2 = preprocessing.LabelEncoder()
# Encode labels in column 'species'.
x_train["Soil Type"]= label_encoder1.fit_transform(x_train["Soil Type"])

x_train["Crop Type"]= label_encoder2.fit_transform(x_train["Crop Type"])
print(x_train)
y_train= label_encoder.fit_transform(y_train)
clf.fit(x_train.values,y_train)
file1 = open("classf.txt", "w") 
file1.write(clf.to_arduino(instance_name='blobClassifie'))
file1.close()
le=label_encoder
print( dict(zip(le.classes_, le.transform(le.classes_))))
le=label_encoder1
print( dict(zip(le.classes_, le.transform(le.classes_))))
le=label_encoder2
print( dict(zip(le.classes_, le.transform(le.classes_))))
print(clf.predict([26, 65,40,0,6,33, 35,40]))