# Problem: Jump Game - https://leetcode.com/problems/jump-game/

class Solution:
    def canJump(self, nums: List[int]) -> bool:
        far = 1
        for ind, x in enumerate(nums):
            if ind + 1 > far:
                # print(ind + 1, far)
                return False
            far = max(far, x + ind + 1)
        return True