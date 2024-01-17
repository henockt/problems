# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None:
            return

        root = ListNode(head.val, None)
        head = head.next

        while head != None:
            newHead = ListNode()
            newHead.val, newHead.next = head.val, root
            root = newHead
            head = head.next

        return root