# Problem: 3Sum Closest  - https://leetcode.com/problems/3sum-closest/

class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        diff = float("inf")
        ans = 0

        nums.sort()

        for k in range(len(nums)):
            i, j = k+1, len(nums)-1
            while i < j:
                curr = nums[i] + nums[j] + nums[k]
                if abs(curr - target) < diff:
                    diff = abs(curr - target)
                    ans = curr
                
                if curr < target:
                    i += 1
                else:
                    j -= 1
        
        return ans