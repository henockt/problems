# Problem: Binary Subarrays With Sum - https://leetcode.com/problems/binary-subarrays-with-sum/

class Solution:
    def numSubarraysWithSum(self, nums: List[int], goal: int) -> int:
        d = defaultdict(int)
        pf = 0
        ans = 0
        d[0] = 1
        for curr in nums:
            pf += curr
            ans += d[pf - goal]
            d[pf] += 1
        return ans