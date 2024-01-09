# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def leafSimilar(self, root1: Optional[TreeNode], root2: Optional[TreeNode]) -> bool:
        def leaves(root):
            l = []
            if root.left == None and root.right == None:
                l.append(root.val)
                return l
            
            if root.left != None:
                m = leaves(root.left)
                for e in m:
                    l.append(e)
            
            if root.right != None:
                m = leaves(root.right)
                for e in m:
                    l.append(e)
            
            return l
        
        a = leaves(root1)
        b = leaves(root2)

        return a == b