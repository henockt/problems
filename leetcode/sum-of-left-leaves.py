# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:
        def sumL(root, lr):
            if root.left == root.right == None:
                if lr ==  0:
                    return root.val
                else:
                    return 0
            
            s = 0
            if root.left != None:
                s += sumL(root.left, 0)
            if root.right != None:
                s += sumL(root.right, 1)
            return s

        return sumL(root, 1)