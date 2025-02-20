# Problem: Reverse Linked List - https://leetcode.com/problems/reverse-linked-list/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return head

        prev = head
        curr = head.next

        while curr:
            temp = curr.next
            curr.next = prev
            if prev.next == curr:
                prev.next = None
            prev = curr
            curr = temp
        
        return prev
