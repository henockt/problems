# Problem: Boats to Save People - https://leetcode.com/problems/boats-to-save-people/

class Solution:
    def numRescueBoats(self, people: List[int], limit: int) -> int:
        people.sort()
        n = len(people)
        i, j = 0, n-1
        ans = 0
        while i < j:
            if people[i] + people[j] <= limit:
                i += 1        
            j -= 1
            ans += 1
        return ans + int(i == j)