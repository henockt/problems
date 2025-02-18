# Problem: Valid Palindrome II - https://leetcode.com/problems/valid-palindrome-ii/description/

class Solution:
    def validPalindrome(self, s: str) -> bool:
        for i in range(26):
            curr = chr(ord("a") + i)
            
            cnt = 0
            a, b = 0, len(s)-1
            while a < b:
                if s[a] == s[b]:
                    a += 1
                    b -= 1
                elif s[a] == curr:
                    a += 1
                    cnt += 1
                else:
                    b -= 1
                    cnt += 1
            
            if cnt <= 1:
                return True
        
        return False
