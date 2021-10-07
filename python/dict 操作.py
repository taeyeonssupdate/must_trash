# 建立Dictionary的方法
heights = {"Mike": 170, "Peter": 165}
cars = {1: "nissan", 2: "toyota"}
print(heights)
print(cars)

heights = dict(Mike=170, Peter=165)
print(heights)


# 存取Dictionary元素的方法
heights = {"Mike": 170, "Peter": 165}
print(heights["Mike"])

heights = {"Mike": 170, "Peter": 165}
try:
    print(heights["Harry"])
except KeyError as e:
    print(f"找不到Harry {e}")

if "Harry" in heights:
    print(heights["Harry"])

for height in heights:
    print(height)

for height in heights.items():
    print(height)

# 新增Dictionary元素的方法
heights = {"Mike": 170, "Peter": 165}
heights["John"] = 175
print(heights)


# 修改Dictionary元素的方法
heights = {"Mike": 170, "Peter": 165}
heights["Peter"] = 160
print(heights)


# 刪除Dictionary元素的方法
heights = {"Mike": 170, "Peter": 165}
del heights["Peter"]
print(heights)

heights = {"Mike": 170, "Peter": 165}
heights.clear()
print(heights)
# 尋找Dictionary元素的方法
heights = {"Mike": 170, "Peter": 165}
print(heights.get("Peter"))
print(heights.get("Harry"))
print(heights.get("Harry", 0))
