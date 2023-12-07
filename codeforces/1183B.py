test_cases = int(input())
output = []

for i in range(test_cases):
    n, k = map(int, input().split())
    goods_prices = list(map(int, input().split()))

    # find a similar element in ai-k to ai+k for all ai
    l, u = max(0, goods_prices[0] - k), goods_prices[0] + k
    for price in goods_prices:
        nl = max(0, price - k)
        nu = price + k
        
        if nl > u or nu < l: # find if there's no intersection in the two sets
            u = -1
            break
        if (nl > l and nl <= u): # shrink from the lower bound side
            l = max(0, nl)
        if (nu < u and nu >= l): # shrink from the upper bound side
            u = nu
    output.append(u)

for o in output:
    print(o)