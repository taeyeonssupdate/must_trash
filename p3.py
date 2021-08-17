for i in range(int(input())):
    _in = input().split(" ")
    a = int(_in[0]) #總數
    b = int(_in[1]) #幾個箱子
    c = int(_in[2]) #小
    d = int(_in[3]) #大
    for x in range(b+1):
        for y in range(b+1):
            if x+y == b:
                if x*c + y*d == a:
                    print(f"{x} {y}")
                else:
                    continue
            else:
                continue
            break

