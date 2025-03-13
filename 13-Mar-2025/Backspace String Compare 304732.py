# Problem: Backspace String Compare - https://leetcode.com/problems/backspace-string-compare/

class Solution:
    def backspaceCompare(self, s: str, t: str) -> bool:
        s = s[::-1]
        t = t[::-1]
        i, j = 0, 0
        ik, jk = 0, 0
        while i < len(s) or j < len(t):
            if i < len(s):
                if s[i] == "#":
                    ik += 1
                    i += 1
                    continue
                if ik:
                    i += 1
                    ik -= 1
                    continue
            
            if j < len(t):
                if t[j] == "#":
                    jk += 1
                    j += 1
                    continue
                if jk:
                    j += 1
                    jk -= 1
                    continue
            
            if i < len(s) and j < len(t) and s[i] == t[j]:
                i += 1
                j += 1
            else:
                return False
        
        return True