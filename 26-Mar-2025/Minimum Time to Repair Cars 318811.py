# Problem: Minimum Time to Repair Cars - https://leetcode.com/problems/minimum-time-to-repair-cars/

class Solution:
    def repairCars(self, ranks: List[int], cars: int) -> int:
        def f(x):
            c = 0
            for r in ranks:
                c += int(floor(sqrt(x / r)))
            return c >= cars
            
        l, r = 0, 1
        while not f(r): l, r = r, r * 2
        while l + 1 < r:
            m = l + (r - l) // 2
            if f(m): r = m
            else:    l = m
        return r