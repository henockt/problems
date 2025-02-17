# Problem: Maximum subarray - https://leetcode.com/problems/maximum-subarray/

class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        pf = 0
        mn = 0
        ans = nums[0]
        for x in nums:
            pf += x
            ans = max(ans, pf - mn)
            mn = min(mn, pf)
        return ans
            