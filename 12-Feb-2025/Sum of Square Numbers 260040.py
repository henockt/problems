# Problem: Sum of Square Numbers - https://leetcode.com/problems/sum-of-square-numbers/

class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        i, j = 0, floor(sqrt(c))
        while i <= j:
            k = i*i + j*j
            if k > c:
                j -= 1
            elif k < c:
                i += 1
            else:
                return True
        return False

