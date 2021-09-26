def algorithm(num):
    if num == 1: return 0
    people = [i for i in range(num, 0, -1)]
    FF = True  # 一死二活正反器
    index = len(people)-1  # 計位器
    while len(people)-1:  # 剩下一人
        if FF:  # 死
            del people[index]
            FF = False
        else:  # 活
            FF = True
        index = len(people)-1 if index == 0 else index - 1
    return people[0]


def algorithm2(num=15):
    次方 = 2
    if num <= 2: return [0, 2][num-1]
    else:
        while 2**次方 < num:
            次方 += 1
        return num-(2**次方-num)


print([algorithm(i) for i in range(1, 16+1)])
print([algorithm2(i) for i in range(1, 16+1)])
print([algorithm(i) for i in range(17, 32+1)])
print([algorithm2(i) for i in range(17, 32+1)])
