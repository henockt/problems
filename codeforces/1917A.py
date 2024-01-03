test_cases = int(input())

for i in range(test_cases):
    n = int(input())
    nums = list(map(int, input().split()))

    prod = 1
    pos, pos_index, pos_found = 0, 0, 0
    for j, num in enumerate(nums):
        prod *= num
        
        if not pos_found:
            if num > 0:
                pos, pos_index = num, j
                pos_found = 1
                continue

    if prod > 0:
        print(1)
        print(pos_index + 1, 0)
        continue

    print(0)
