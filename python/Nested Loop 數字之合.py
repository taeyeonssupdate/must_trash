#data
a = [2, 4, 6, 8, 10, 12]
b = [1, 3, 5, 7, 9, 11]
c = [1, 2, 3, 5, 8, 13]


# 1.
print(a.index(int(input())))


# 2.
num = int(input())
for x in a:
    if num-x in b:
        print((a.index(x), b.index(num-x)))
# (lambda num: [print((a.index(x), b.index(num-x))) for x in a if num-x in b])(int(input()))


# 3.
num = int(input())
for x in a:
    for y in b:
        for z in c:
            if num-x-y-z == 0:
                print((a.index(x), b.index(y), c.index(z)))
# (lambda num: [print((a.index(x), b.index(y), c.index(z))) for x in a for y in b for z in c if num-x-y-z == 0])(int(input()))
