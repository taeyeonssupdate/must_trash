def aModM(s, mod):
    number = 0
    for i in range(len(s)):
        number = (number*10 + int(s[i]))
        number = number % m
    return number


def ApowBmodM(a, b, m):
    ans = aModM(a, m)
    mul = ans
    for i in range(1, b):
        ans = (ans*mul) % m
    return ans


a = "5"
b, m = 10, 11
print(ApowBmodM(a, b, m))
