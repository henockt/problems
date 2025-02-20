# Problem: Remove Linked List Elements - https://leetcode.com/problems/remove-linked-list-elements/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        if not head:
            return head
        prev = head
        curr = head.next

        while curr:
            while curr and curr.val == val:
                prev.next = curr.next
                curr = curr.next
            
            if curr:
                prev = curr
                curr = curr.next

        return head.next if head and head.val == val else head