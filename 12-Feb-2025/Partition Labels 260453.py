# Problem: Partition Labels - https://leetcode.com/problems/partition-labels/

class Solution:
    def partitionLabels(self, s: str) -> List[int]:
        d = {s[i]:i for i in range(len(s))}

        curr_max = 0
        j = 0
        ans = []
        for i in range(len(s)):
            curr_max = max(curr_max, d[s[i]])
            if i == curr_max:
                ans.append(j + 1)
                j = 0
            else:
                j += 1
        return ans