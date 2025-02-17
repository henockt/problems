# Problem: Subarray Sum Equals K - https://leetcode.com/problems/subarray-sum-equals-k/

class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        ans = 0
        d = defaultdict(int)
        pf = 0
        d[0] = 1
        for x in nums:
            pf += x
            ans += d[pf - k]
            d[pf] += 1
        return ans