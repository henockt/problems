n = int(input())

def sumd(t):
    sumd = 0
    while t > 0:
        sumd += (t % 10)
        t //= 10
    return sumd

a = sumd(n)
while a % 4 != 0:
    n += 1
    a = sumd(n)

print(n)