_in = input().split(" ")
x1 = int(_in[0])
x2 = int(_in[1])
x3 = int(_in[2])


for index, i in enumerate(input().split(" ")):
    if index == 0:
        if i == "N":
            y1 = not x1
        elif i == "E":
            y1 = x1
    if index == 1:
        if i == "A":
            y2 = x2 and y1
        elif i == "O":
            y2 = x2 or y1
    if index == 2:
        if i == "A":
            y3 = x3 and y2
        elif i == "O":
            y3 = x3 or y2

if y1 == True:
    print("1 ", end='')
elif y1 == False:
    print("0 ", end="")
if y2 == True:
    print("1 ", end='')
elif y2 == False:
    print("0 ", end="")
if y3 == True:
    print("1")
elif y3 == False:
    print("0")
