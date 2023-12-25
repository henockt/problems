n = int(input())

for i in range(2, n, 2):
    if (n - i) % 2 == 0:
        print("YES")
        exit()

print("NO")