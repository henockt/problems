class Solution:
    def minSteps(self, s: str, t: str) -> int:
        s_count, t_count = {}, {}

        for i in range(len(s)):
            char_s = s[i]
            char_t = t[i]

            if s_count.get(char_s):
                s_count[char_s] += 1
            else:
                s_count[char_s] = 1

            if t_count.get(char_t):
                t_count[char_t] += 1
            else:
                t_count[char_t] = 1
        
        # count the no. of letters t has more than s
        count = 0
        for char, char_count in t_count.items():
            if s_count.get(char):
                if (char_count > s_count[char]):
                    count += char_count - s_count[char]
            else:
                count += char_count

        return count