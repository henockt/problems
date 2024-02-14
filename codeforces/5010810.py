test_cases = int(input())

for _ in range(test_cases):
    n, k = map(int, input().split())

    a = list(map(int, input().split()))
    b = list(map(int, input().split()))

    while (True):
        if len(a) == 0:
            break

        maxA, maxB = 0, 0
        index = -1

        for i, elem in enumerate(a):
            if elem <= k and b[i] > maxB:
                maxA = elem
                maxB = b[i]
                index = i
        
        if index == -1:
            break

        k += maxB
        a.pop(index)
        b.pop(index)
    
    print(k)


            

    # d1 = {}
    # for i, elem in enumerate(a):
    #     d1[a] = [i, b[i]]

    # d2 = {}
    # for i, elem in enumerate(b):
    #     d2[b] = [i, a[i]]
    
    # aS = sorted(a)
    # bS = sorted(b)

    # for elem in bs:




             