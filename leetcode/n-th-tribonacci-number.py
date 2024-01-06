dp = {}

class Solution:
    def tribonacci(self, n: int) -> int:
        if dp.get(n):
            return dp[n]

        if (n == 0):
            return 0
        if (n <= 2):
            return 1
        
        c = self.tribonacci(n - 1) + self.tribonacci(n - 2) + self.tribonacci(n - 3)
        dp[n] = c
        return c