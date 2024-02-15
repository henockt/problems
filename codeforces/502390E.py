n, k = map(int, input().split())
nums = list(map(int, input().split()))

left, right = 0, k-1
minSum, index = 0, 0
for i in range(left, right+1):
    minSum += nums[i]
prevSum = minSum

left, right = left+1, right+1
while right < n:
    prevSum = prevSum - nums[left-1] + nums[right]
    if prevSum < minSum:
        minSum = prevSum
        index = left
    left += 1
    right += 1

print(index+1)