# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def tree2str(self, root: Optional[TreeNode]) -> str:
        if root == None:
            return None
        
        s = str(root.val)

        l = self.tree2str(root.left)
        r = self.tree2str(root.right)

        if l:
            s += "(" + l + ")"
        
        if r and l:
            s += "(" + r + ")"
        elif r:
            s += "()(" + r + ")"
        
        return s