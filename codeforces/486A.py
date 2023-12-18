n = int(input())

# f(x) = -1+2-3....(-1^n)(n)
if n % 2 == 0:
    print(n // 2)
else:
    n -= n // 2
    print(n * -1)
