test_cases = int(input())

for _ in range(test_cases):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))

    d = {}

    for num in a:
        d[num] = True

    found = False
    
    for num in a:
        if d.get(k + num):
            found = True
            break
    
    if found:
        print("YES")
    else:       
        print("NO")