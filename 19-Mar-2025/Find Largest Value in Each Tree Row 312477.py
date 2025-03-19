# Problem: Find Largest Value in Each Tree Row - https://leetcode.com/problems/find-largest-value-in-each-tree-row/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def largestValues(self, root: Optional[TreeNode]) -> List[int]:
        ans = {}
        def f(x, d):
            if x == None:
                return
            if d not in ans:
                ans[d] = float("-inf")
            ans[d] = max(ans[d], x.val)
            f(x.left, d + 1)
            f(x.right, d + 1)
        f(root, 0)
        return list(ans.values())