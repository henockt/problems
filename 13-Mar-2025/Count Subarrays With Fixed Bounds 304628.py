# Problem: Count Subarrays With Fixed Bounds - https://leetcode.com/problems/count-subarrays-with-fixed-bounds/

class Solution:
    def countSubarrays(self, nums: List[int], minK: int, maxK: int) -> int:
        curr = []
        ans = 0
        n = len(nums)
        nums.append(maxK + 1)
        for x in nums:
            if x < minK or x > maxK:
                m = len(curr)
                nxt_min = [m] * m
                nxt_max = [m] * m
                for i in range(m-1, -1, -1):
                    if curr[i] == minK:
                        nxt_min[i] = i
                    if curr[i] == maxK:
                        nxt_max[i] = i
                    if i + 1 < m:
                        nxt_min[i] = min(nxt_min[i], nxt_min[i + 1])
                        nxt_max[i] = min(nxt_max[i], nxt_max[i + 1])

                for i in range(m):
                    ans += m - max(nxt_min[i], nxt_max[i])
                curr = []
            else:
                curr.append(x)
        
        return ans



