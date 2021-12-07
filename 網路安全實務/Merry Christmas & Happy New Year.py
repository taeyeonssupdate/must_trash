# Merry Christmas & Happy New Year, 8
string, n = input(), int(input())
out = [string[n*i:n*(i+1)] for i in range(len(string)//n)]
[print(out[j][i], end='') for i in range(n) for j in range(len(out))]
