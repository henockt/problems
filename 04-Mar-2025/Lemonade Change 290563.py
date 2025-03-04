# Problem: Lemonade Change - https://leetcode.com/problems/lemonade-change/

class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        c = Counter()
        for x in bills:
            c[x] += 1
            if x == 10:
                if c[5]:
                    c[5] -= 1
                else:
                    return False 
            elif x == 20:
                if c[10] and c[5]:
                    c[10] -= 1
                    c[5] -= 1
                elif c[5] >= 3:
                    c[5] -= 3
                else:
                    return False
        return True
                

            