# Problem: Contiguous Array - https://leetcode.com/problems/contiguous-array/

class Solution:
    def findMaxLength(self, nums: List[int]) -> int:
        # pr - pl == (r - l) // 2
        # 2*pr - 2*pl == (r - l)
        # 2*pr - r == 2*pl - l
        n = len(nums)
        for i in range(1, n):
            nums[i] += nums[i-1]

        d = defaultdict(int)
        ans = 0
        for r, x in enumerate(nums):
            comp = 2*x - r
            if comp in d:
                ans = max(ans, r - d[comp])
            if (r + 1) % 2 == 0 and x == (r + 1) // 2:
                ans = max(ans, r + 1)
            if comp not in d:
                d[comp] = r

        return ans