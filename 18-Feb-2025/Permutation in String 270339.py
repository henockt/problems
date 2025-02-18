# Problem: Permutation in String - https://leetcode.com/problems/permutation-in-string/

class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        arr = [0] * 26
        curr = [0] * 26
        for char in s1:
            arr[ord(char) - ord("a")] += 1

        k = len(s1)
        for i in range(min(k, len(s2))):
            curr[ord(s2[i]) - ord("a")] += 1

        if arr == curr:
            return True
        for i in range(k, len(s2)):
            curr[ord(s2[i]) - ord("a")] += 1
            curr[ord(s2[i-k]) - ord("a")] -= 1
            if arr == curr:
                return True
        
        return False
                        