n = int(input())

# remove trailing zeros
while n % 10 == 0:
    n //= 10

# check palindrome
palindrome = True
n = str(n)
l = len(n)
j = l - 1
for i in range(0, l // 2):
    if n[i] != n[j]:
        palindrome = False
        break
    j -= 1

if palindrome:
    print("YES")
else:
    print("NO")
