k = int(input())
string = input()

d = {}

for char in string:
    if d.get(char):
        d[char] += 1
    else:
        d[char] = 1

s = ""
for key in d.keys():
    if d[key] % k != 0:
        print(-1)
        exit()
    t = d[key] // k
    s += key * t

print(s * k)