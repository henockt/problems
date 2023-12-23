n = int(input())

max_cashes_count = 1
curr_cashes_count = 1

prevh, prevm = map(int, input().split())
for i in range(n - 1):
    newh, newm = map(int, input().split())
    
    if newh == prevh and newm == prevm:
        curr_cashes_count += 1
        prevh, prevm = newh, newm
        continue

    if curr_cashes_count > max_cashes_count:
        max_cashes_count = curr_cashes_count
    
    curr_cashes_count = 1
    prevh, prevm = newh, newm

print(max(max_cashes_count, curr_cashes_count))
