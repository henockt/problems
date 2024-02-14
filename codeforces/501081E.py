n, m = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

aS = sorted(a)
bS = sorted(b)

d = {}

# for elem in b:
#     ct = 0
#     for i, el in enumerate(aS):
#         if el > elem:
#             break
#         ct = i + 1
    
#     print(ct, end=" ")

index = 0
leng = n
ct = 0
for i, elem in enumerate(bS):
    while index < n:
        elA = aS[index]
        if elA > elem:
            break
        ct += 1
        index += 1
    d[elem] = ct

for elem in b:
    if d.get(elem):
        print(d[elem], end=" ")
    else:
        print(0, end=" ")

print()    

    