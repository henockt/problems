# Problem: Divide Players Into Teams of Equal Skill - https://leetcode.com/problems/divide-players-into-teams-of-equal-skill/

class Solution:
    def dividePlayers(self, skill: List[int]) -> int:
        skill.sort()
        k = skill[0] + skill[-1]
        chem = 0
        for i in range(len(skill) // 2):
            if skill[i] + skill[-(i + 1)] != k:
                return -1
            chem += skill[i] * skill[-(i + 1)] 
        return chem