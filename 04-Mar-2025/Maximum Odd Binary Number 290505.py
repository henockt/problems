# Problem: Maximum Odd Binary Number - https://leetcode.com/problems/maximum-odd-binary-number/

class Solution:
    def maximumOddBinaryNumber(self, s: str) -> str:
        t = s.count("1")
        return "1" * (t - 1) + "0" * (len(s) - t) + "1"