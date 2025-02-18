# Problem: Maximum Sum Obtained of Any Permutation - https://leetcode.com/problems/maximum-sum-obtained-of-any-permutation/description/

class Solution:
    def maxSumRangeQuery(self, nums: List[int], requests: List[List[int]]) -> int:
        MOD = 10**9 + 7

        arr = [0] * len(nums)
        for l, r in requests:
            arr[l] += 1
            if r + 1 < len(nums):
                arr[r + 1] -= 1
        for i in range(1, len(nums)):
            arr[i] += arr[i-1]
        
        nums.sort()
        arr.sort()

        ans = 0
        for i in range(len(nums)):
            ans = (ans + nums[i] * arr[i]) % MOD
        return ans