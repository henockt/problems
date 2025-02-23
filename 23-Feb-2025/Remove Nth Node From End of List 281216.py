# Problem: Remove Nth Node From End of List - https://leetcode.com/problems/remove-nth-node-from-end-of-list/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        if not head or not head.next:
            return None
        curr = head
        for i in range(n+1):
            if not curr:
                return head.next
            curr = curr.next
        tbd = head
        while curr:
            curr = curr.next
            tbd = tbd.next
        tbd.next = tbd.next.next
        return head