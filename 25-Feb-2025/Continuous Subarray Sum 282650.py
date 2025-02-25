# Problem: Continuous Subarray Sum - https://leetcode.com/problems/continuous-subarray-sum/

class Solution:
    def checkSubarraySum(self, nums: List[int], k: int) -> bool:
        d = defaultdict(int)
        d[0] = 1
        curr = nums[0]
        prev = curr
        for i in range(1, len(nums)):
            curr += nums[i]
            if d[curr % k] != 0:
                return True
            d[prev % k] += 1
            prev = curr
        return False
