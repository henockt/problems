# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        root = ListNode()

        if head == None:
            return

        if head.val != val:
            root.val = head.val
            root.next = self.removeElements(head.next, val)
        else:
            root = self.removeElements(head.next, val)

        return root