# Problem: Subarray Sums Divisible by K - https://leetcode.com/problems/subarray-sums-divisible-by-k/

class Solution:
    def subarraysDivByK(self, nums: List[int], k: int) -> int:
        d = defaultdict(int)
        d[0] = 1
        pf = 0
        ans = 0
        for x in nums:
            pf += x
            ans += d[pf % k]
            d[pf % k] += 1
        return ans