# Problem: Remove Duplicates from Sorted List - https://leetcode.com/problems/remove-duplicates-from-sorted-list/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if not head:
            return head
        prev = head
        curr = head.next

        while curr:
            while curr and curr.val == prev.val:
                prev.next = curr.next
                curr = curr.next
            
            if curr:
                prev = curr
                curr = curr.next

        return head