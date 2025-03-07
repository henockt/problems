# Problem: Longest Contiguous Subarray With Absolute Diff Less Than or Equal to Limit - https://leetcode.com/problems/longest-continuous-subarray-with-absolute-diff-less-than-or-equal-to-limit/

class Solution:
    def longestSubarray(self, nums: List[int], limit: int) -> int:
        mn, mx = deque(), deque()
        l = 0
        ans = 0
        for r in range(len(nums)):
            while mn and nums[r] <= nums[mn[-1]]:
                mn.pop()
            mn.append(r)
            while mx and nums[r] >= nums[mx[-1]]:
                mx.pop()
            mx.append(r)

            while nums[mx[0]] - nums[mn[0]] > limit:
                if mx[0] == l:
                    mx.popleft()
                if mn[0] == l:
                    mn.popleft()
                l += 1

            ans = max(ans, r - l + 1)
        
        return ans