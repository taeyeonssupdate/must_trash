# 建立Tuples的方法
ages = (26, 30, 40, 50)
print(ages)

titles = ("Hellopython", "Tuples")
print(titles)

ages = 26, 30, 40, 50
print(ages)
print("ages data type: ", type(ages))

titles = "Hellopython", "Tuples"
print(titles)
print("titles data type: ", type(titles))

ages = tuple([26, 30])
print(ages)

names = tuple("Mike")
print(names)

numbers = tuple(range(10))
print(numbers)

age = (26, 30)*3
print(age)


# 存取Tuples元素的方法
ages = (25, 30, 40, 50)
print(ages[1:3])
print(ages[1:])
print(ages[:3])
print(ages[:])

for age in ages:
    print(age)

# 尋找Tuples元素的方法
ages = (25, 30, 40, 50)
print(ages.index(30))

age = (25, 30, 40, 50)
if 100 in age:
    print(ages.index(100))
else:
    print("100 not in tuples")

ages = (25, 30, 40, 25, 60, 25)
print(ages.count(25))
