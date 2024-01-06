dp = {}

class Solution:
    def fib(self, n: int) -> int:
        if dp.get(n):
            return dp[n]
        if n == 0:
            return 0
        if n == 1:
            return 1

        a = Solution()
        c = a.fib(n - 1) + a.fib(n - 2)
        dp[n] = c
        return c