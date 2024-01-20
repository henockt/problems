class Solution:
    def arrangeCoins(self, n: int) -> int:
        # x(x+1)<=2n, find x
        # x^2 + x - 2n <= 0
        d = 1 - (4 * -2 * n)
        x1 = (-1 + sqrt(d)) // 2
        return int(x1)