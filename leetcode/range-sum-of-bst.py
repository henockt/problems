# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rangeSumBST(self, root: Optional[TreeNode], low: int, high: int) -> int:
        t = 0
        if root.val >= low and root.val <= high:
            t += root.val

        if root.left == None and root.right == None:
            return t
        
        if root.left != None:
            t += self.rangeSumBST(root.left, low, high)

        if root.right != None:
            t += self.rangeSumBST(root.right, low, high)
        
        return t
        