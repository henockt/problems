# Problem: Interval List Intersections - https://leetcode.com/problems/interval-list-intersections/

class Solution:
    def intervalIntersection(self, firstList: List[List[int]], secondList: List[List[int]]) -> List[List[int]]:
        n, m = len(firstList), len(secondList)
        i, j = 0, 0
        ans = []
        while i < n and j < m:
            currL = max(firstList[i][0], secondList[j][0])
            currR = min(firstList[i][1], secondList[j][1])
            if currL <= currR:
                ans.append([currL, currR])
            
            if firstList[i][1] < secondList[j][1]:
                i += 1
            else:
                j += 1
        
        return ans