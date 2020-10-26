
import sys

def int_to_Roman(num):
    if not num:
        return "ZERO"
    val = [
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4,
        1
    ]
    syb = [
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV",
        "I"
    ]
    roman_num = ''
    i = 0
    while num > 0:
        for _ in range(num // val[i]):
            roman_num += syb[i]
            num -= val[i]
        i += 1
    return roman_num

def str_to_roman(s):
    a = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
    ans = 0 
    for i in range(len(s)-1):    
        if a[s[i]] < a[s[i+1]]:
            ans-=a[s[i]]
        else:
            ans+=a[s[i]]
    ans += a[s[-1]]
    return ans


for a in sys.stdin:
    _input = a.strip().split(" ")
    if len(_input)-1:
        print(str_to_roman(_input[0]))
        exit(0)
        print(int_to_Roman(abs(str_to_roman(_input[0])-str_to_roman(_input[1]))))
