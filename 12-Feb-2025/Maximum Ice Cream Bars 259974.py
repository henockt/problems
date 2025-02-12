# Problem: Maximum Ice Cream Bars - https://leetcode.com/problems/maximum-ice-cream-bars/

class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        arr = [0] * (10**5 + 1)
        for elem in costs:
            arr[elem] += 1

        curr = 0
        ans = 0
        for i in range(1, 10**5 + 1):
            can = min((coins - curr) // i, arr[i])
            ans += can
            curr += can * i
        return ans
            