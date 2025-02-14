# Problem: Separate Black and white balls - https://leetcode.com/problems/separate-black-and-white-balls/

class Solution:
    def minimumSteps(self, s: str) -> int:
        zeroes, ones = 0, 0
        s += "1"
        ans = 0
        for i in range(len(s)):
            if i and s[i] == "1" and s[i-1] == "0":
                ans += ones * zeroes
                zeroes = 0
            if s[i] == "1":
                ones += 1
            else:
                zeroes += 1
        return ans