# A. Petya and Strings
s = input().lower()
t = input().lower()
n = len(s)

for i in range(n):
    if ord(s[i]) < ord(t[i]):
        print("-1")
        exit()
    elif ord(s[i]) > ord(t[i]):
        print("1")
        exit()
        
print("0")