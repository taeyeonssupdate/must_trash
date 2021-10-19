def Collatz(n):
    count = 0
    while n-1:
        if n % 2 == 0:
            n /= 2
        elif n % 2 == 1:
            n = 3*n+1
        count += 1
    return count


data = [Collatz(n) for n in range(10, 100+1)]
print(data)
print(max(data))
