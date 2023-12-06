n, h = map(int, input().split())
ppl = list(map(int, input().split()))

counter = 0
for p in ppl:
    if p > h:
        counter += 2
    else:
        counter += 1
print(counter)
