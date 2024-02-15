from collections import deque

s = input()

out = deque()

for char in s:
    if out:
        if char != out[0]:
            out.appendleft(char)
        else:
            out.popleft()
    else:
        out.appendleft(char)

s = "".join(out)

leng = len(s)

for i in range(leng-1, -1, -1):
    print(s[i], end="")
print()