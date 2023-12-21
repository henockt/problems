test_cases = int(input())
output = []

def two_sum(nums):
    for i, target in enumerate(nums):
        for j, num in enumerate(nums):
            for k, num2 in enumerate(nums):
                if num2 + num == target and i != j and j != k and i != k:
                    return True

    return False

for i in range(test_cases):
    nums = list(map(int, input().split()))
    
    if two_sum(nums):
        output.append("YES")
    else:
        output.append("NO")

for o in output:
    print(o)