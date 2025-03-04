# Problem: Minimum Moves to Reach Target Score - https://leetcode.com/problems/minimum-moves-to-reach-target-score/

class Solution:
    def minMoves(self, target: int, maxDoubles: int) -> int:
        ans = 0
        while target > 1:
            if target & 1:
                target -= 1
            elif maxDoubles:
                target //= 2
                maxDoubles -= 1
            else:
                break
            ans += 1

        return ans + target - 1