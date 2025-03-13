# Problem: Remove Letter To Equalize Frequency - https://leetcode.com/problems/remove-letter-to-equalize-frequency/

class Solution:
    def equalFrequency(self, word: str) -> bool:
        c = Counter(word)
        t = sorted(list([x for x in c.values()]))
        if len(t) == 1 or (t[0] == 1 and len(set(t[1:])) == 1):
            return True
        if ((t[-2] + 1 == t[-1] and len(set(t[:-1])) == 1)):
            return True
        return False
