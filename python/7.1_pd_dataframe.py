import pandas as pd

df = pd.DataFrame({
    "name": ["Bob", "Ben", "Mary", "John"],
    "ch": [90, 80, 85, 70],
    "en": [91, 81, 86, 71],
    "ma": [92, 82, 87, 72], })
df['totle'] = df.sum(axis=1)
df = df.sort_values('totle', ascending=False)
df = df.reset_index(drop=True)
df.to_csv('tmp.csv', index=False)
print(pd.read_csv('tmp.csv'))
