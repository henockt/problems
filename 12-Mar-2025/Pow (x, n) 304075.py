# Problem: Pow (x, n) - https://leetcode.com/problems/powx-n/

class Solution:
    def myPow(self, x: float, n: int) -> float:
        def p(a, b):
            if b == 1:
                return a
            if (b & 1):
                return a * p(a * a, b // 2)
            else:
                return p(a * a, b // 2)

        if n == 0:
            return 1
        ans = p(x, abs(n))
        return ans if n > 0 else (1 / ans)