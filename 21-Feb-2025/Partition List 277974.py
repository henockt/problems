# Problem: Partition List - https://leetcode.com/problems/partition-list/

# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
        lt, gt = None, None
        lth, gth = None, None
        curr = head
        while curr:
            if curr.val < x:
                if not lt:
                    lt = curr
                    lth = lt
                else:
                    lt.next = curr
                    lt = lt.next
            else:
                if not gt:
                    gt = curr
                    gth = gt
                else:
                    gt.next = curr
                    gt = gt.next
            curr = curr.next
        
        if gt:
            gt.next = None
        if lt:
            lt.next = gth
        return lth if lth else gth