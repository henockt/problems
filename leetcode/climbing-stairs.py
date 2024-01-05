# dp = {}
# def climb(n):
#     if n == 0:
#         return 0
        
#     if n == 1:
#         return 1

#     if dp.get(n):
#         return dp[n]

#     w = climb(n-1) + climb(n-2)

#     if w + 1 > n:
#         dp[n] = w
#         return w
#     else:
#         dp[n] = w + 1
#         return w + 1

class Solution:
    def climbStairs(self, n: int) -> int:
        # fibonacci seq
        c, d = 0, 1
        for i in range(n):
            c, d = d, c + d
        
        return d
        