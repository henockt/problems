# Problem: Range Sum Query 2D - Immutable - https://leetcode.com/problems/range-sum-query-2d-immutable/

class NumMatrix:

    def __init__(self, matrix: List[List[int]]):
        n, m = len(matrix), len(matrix[0])
        self.pf = [[0] * (m + 1) for _ in range(n + 1)]
        for i in range(1, n + 1):
            for j in range(1, m + 1):
                self.pf[i][j] = matrix[i-1][j-1] + self.pf[i-1][j] + self.pf[i][j-1] - self.pf[i-1][j-1]

    def sumRegion(self, row1: int, col1: int, row2: int, col2: int) -> int:
        return self.pf[row2+1][col2+1] - self.pf[row2+1][col1] - self.pf[row1][col2+1] + self.pf[row1][col1]