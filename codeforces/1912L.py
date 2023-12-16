n = int(input())
table = input()

totalL, totalO = 0, 0
for t in table:
    if t == "L":
        totalL += 1
    else:
        totalO += 1

currL, currO = 0, 0
for i in range(len(table) - 1):
    if table[i] == "L":
        currL += 1
    else:
        currO += 1
    
    rightL = totalL - currL
    rightO = totalO - currO
    if currL != rightL and currO != rightO:
        print(i + 1)
        exit()

print("-1")