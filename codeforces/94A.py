pwd = input()
pwds = [pwd[i:i+10] for i in range(0, 80, 10)]

binToDig = {}
for i in range(10):
    binToDig[input()] = i

for p in pwds:
    print(binToDig[p], end="")
print()
