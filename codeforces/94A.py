pwd = input()

binToDig = {}
for i in range(10):
    binToDig[input()] = i

for i in range(0, 80, 10):
    p = pwd[i:i+10]
    print(binToDig[p], end="")
print()
