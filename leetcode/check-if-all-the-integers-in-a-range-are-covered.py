class Solution:
    def isCovered(self, ranges: List[List[int]], left: int, right: int) -> bool:
        ranges.sort()

        for rang in ranges:
            if (rang[0] <= left <= rang[1]):
                left = rang[1] + 1
            
            if left > right:
                return True
        
        return False