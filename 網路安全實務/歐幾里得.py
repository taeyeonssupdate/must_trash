def gcd(a, b):
    if a < b:
        a, b = b, a
    return a if b == 0 else gcd(b, a % b)


if __name__ == "__main__":
    print(gcd(552, 234))
