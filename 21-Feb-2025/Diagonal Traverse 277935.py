# Problem: Diagonal Traverse - https://leetcode.com/problems/diagonal-traverse/

class Solution:
    def findDiagonalOrder(self, mat: List[List[int]]) -> List[int]:
        n, m = len(mat), len(mat[0])
        ans = [[] for _ in range(m + n)]
        for i in range(n):
            for j in range(m):
                ans[i + j].append(mat[i][j])
        
        res = []
        for i in range(m + n):
            res.extend(ans[i] if (i & 1) else ans[i][::-1])
        return res