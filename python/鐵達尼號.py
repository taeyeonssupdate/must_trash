import numpy as np
import pandas as pd

df = pd.read_csv('./python/titanc_train.csv')

print(f"資料筆數有 {len(df)}個")

victim = df[(df.survived == 0)]
survive = df[(df.survived == 1)]

df = pd.concat([victim, survive])

df['生存與否'] = np.where(df['survived'] == 0, '遇難', '生存')

print(f"生存人數為 {len(df[(df.survived == 1)])}位")
print(f"遇難人數為 {len(df[(df.survived == 0)])}位")
print(f"女性人數為 {len(df[(df.sex == 'female')])}位")
print(f"男性人數為 {len(df[(df.sex == 'male')])}位")

print(f"最高票價 {df.fare.max()}$")
print(f"最低票價 {df.fare.min()}$")
print(f"平均票價 {df.fare.mean()}$")

print(f"港口有 {len(df.embarked.unique())}")

print(df.head(20))

df.age = df.age.fillna(value=df.age.mean())
