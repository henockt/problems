# Problem: Sum of Absolute Differences in a Sorted Array - https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/

class Solution:
    def getSumAbsoluteDifferences(self, nums: List[int]) -> List[int]:
        pf = nums[:]
        n = len(pf)
        for i in range(1, n):
            pf[i] += pf[i-1]

        ans = [0] * n
        for i in range(n):
            left = (i + 1) * (nums[i]) - pf[i]
            right =  (pf[n - 1] - pf[i]) - (n - i - 1) * (nums[i])
            ans[i] = left + right
        return ans