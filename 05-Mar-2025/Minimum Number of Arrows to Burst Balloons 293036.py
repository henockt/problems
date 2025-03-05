# Problem: Minimum Number of Arrows to Burst Balloons - https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/

class Solution:
    def findMinArrowShots(self, points: List[List[int]]) -> int:
        points.sort(key = lambda x : (x[0], x[1]))
        i, ans = 0, 0
        n = len(points)
        print(points)
        while i < n:
            j = i + 1
            en = points[i][1]
            while j < n and min(en, points[i][1]) >= points[j][0]:
                en = min(en, points[j][1])
                j += 1
            i = j
            ans += 1
        return ans