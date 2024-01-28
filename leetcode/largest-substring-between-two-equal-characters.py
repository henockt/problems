class Solution:
    def maxLengthBetweenEqualCharacters(self, s: str) -> int:
        d = {}
        leng = len(s)

        maxLeng = -1

        for i in range(leng):
            char = s[i]
            if d.get(char) != None:
                maxLeng = max(maxLeng, i-d[char]-1)
            else:
                d[char] = i
        
        return maxLeng