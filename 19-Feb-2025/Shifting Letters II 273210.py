# Problem: Shifting Letters II - https://leetcode.com/problems/shifting-letters-ii/description/

class Solution:
    def shiftingLetters(self, s: str, shifts: List[List[int]]) -> str:
        n = len(s)
        pf = [0] * n
        for l, r, d in shifts:
            if not d: d = -1
            pf[l] += d
            if r + 1 < n:
                pf[r + 1] -= d
        for i in range(1, n):
            pf[i] += pf[i-1]
        
        ans = []
        for i in range(n):
            curr = ord(s[i]) - ord("a")
            curr = (curr + pf[i]) % 26
            ans.append(chr(curr + ord("a")))
        return "".join(ans)