probs = int(input())
counter = 0
for i in range(probs):
    a, b, c = map(int, input().split())
    if (a + b + c) > 1:
        counter += 1
print(counter)    