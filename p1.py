group = int(input())
_in = input().split(" ")
go = []
back = []
for j in range(len(_in)):
    if j % 2 == 0:
        go.append(int(_in[j]))
    elif j % 2 == 1:
        back.append(int(_in[j]))
go.sort()
back.sort()
# print(go)
# print(back)


def cool(go, back):
    for i in range(len(go)):
        for j in range(len(back)):
            if i == j:
                continue
            # print(f"back {back[i]} go {go[j]}")
            if go[i] - back[j] >= 1:
                return i, j
                # print("work")
    return 20, 20


while True:
    i, j = cool(go, back)
    if i == j == 20:
        break
    else:
        del go[i]
        del back[j]
        group-=1


print(group)
