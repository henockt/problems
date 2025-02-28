# Problem: Maximum Absolute Sum of Any Subarray - https://leetcode.com/problems/maximum-absolute-sum-of-any-subarray/

class Solution:
    def maxAbsoluteSum(self, nums: List[int]) -> int:
        ans1, ans2 = 0, 0
        prev1, prev2 = 0, 0
        for x in nums:
            prev1 +=  x
            prev2 += -x
            prev1 = max(prev1, x)
            prev2 = max(prev2, -x)
            ans1 = max(prev1, ans1)
            ans2 = max(prev2, ans2)

        return max(ans1, ans2)