# Problem: Car Pooling - https://leetcode.com/problems/car-pooling/description/

class Solution:
    def carPooling(self, trips: List[List[int]], capacity: int) -> bool:
        pf = [0] * 1002
        for k, l, r in trips:
            pf[l] += k
            pf[r] -= k
        for i in range(1, 1002):
            pf[i] += pf[i-1]

        return max(pf) <= capacity

