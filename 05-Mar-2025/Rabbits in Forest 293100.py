# Problem: Rabbits in Forest - https://leetcode.com/problems/rabbits-in-forest/

class Solution:
    def numRabbits(self, answers: List[int]) -> int:
        c = Counter(answers)
        ans = 0
        for x, cnt in c.items():
            y = x + 1
            can = (cnt + y - 1) // y
            ans += can * y
        return ans