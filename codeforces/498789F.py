stonesLen = int(input())
costs = list(map(int, input().split()))
sCosts = sorted(costs)

m = int(input())

prefixCosts = [costs[0]]
for i in range(1, stonesLen):
    prefixCosts.append(prefixCosts[i-1] + costs[i])

prefixSorCosts = [sCosts[0]]
for i in range(1, stonesLen):
    prefixSorCosts.append(prefixSorCosts[i-1] + sCosts[i])

for i in range(m):
    typ, l, r = map(int, input().split())
    curr = []
    if typ == 1:
        curr = prefixCosts
    else:
        curr = prefixSorCosts
    
    right = curr[r-1]
    left = 0
    if l-2 >= 0:
        left = curr[l-2]
        
    print(right - left)
    