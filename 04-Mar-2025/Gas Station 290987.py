# Problem: Gas Station - https://leetcode.com/problems/gas-station/

class Solution:
    def canCompleteCircuit(self, gas: List[int], cost: List[int]) -> int:
        t = [x - y for x, y in zip(gas, cost)]
        t = t + t
        st, pf = 0, 0
        for i in range(2 * len(gas)):
            pf += t[i]
            if pf < 0:
                pf = 0
                st = i + 1
            if pf >= 0 and (i - st + 1) == len(gas):
                return st
        return -1
