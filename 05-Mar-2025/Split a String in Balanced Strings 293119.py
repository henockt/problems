# Problem: Split a String in Balanced Strings - https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution:
    def balancedStringSplit(self, s: str) -> int:
        ans = 0
        r, l = 0, 0
        for x in s:
            if x == "R": r += 1
            else:        l += 1
            if r == l:
                ans += 1
                r, l = 0, 0
        return ans