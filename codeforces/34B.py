n, m = map(int, input().split())
costs = list(map(int, input().split()))

negs, negs_len = [], 0

for cost in costs:
    if cost < 0:
        negs.append(cost)
        negs_len += 1

negs = sorted(negs)
t, k = 0, min(m, negs_len)
for i in range(k):
    t += negs[i]

print(-t)