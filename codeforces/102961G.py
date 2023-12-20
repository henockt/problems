n, target = map(int, input().split())
iarr = list(map(int, input().split()))

arr = sorted(iarr)

start, end = 0, n - 1
while start < end:
    s = arr[start] + arr[end]

    if s == target:
        a = iarr.index(arr[start])
        iarr[a] = None
        b = iarr.index(arr[end])
        iarr[b] = None
        print(a + 1, b + 1)
        exit()
    elif s < target:
        start += 1
    else:
        end -= 1

print(-1)

