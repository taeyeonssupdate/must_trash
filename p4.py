for i in range(int(input())):
    _input = input().split(" ")
    n = int(_input[0])
    k = int(_input[1])
    for i in range(n):
        k+=1
        k*=2
    print(k)