class Solution:
    def commonFactors(self, a: int, b: int) -> int:
        if a > b:
            a, b = b, a

        if a == 1 or b == 1:
            return 1

        common = 1

        i = 2
        while (i <= a // 2):
            if (a % i == 0 and b % i == 0):
                common += 1
            i += 1

        if (b % a == 0):
            common += 1

        return common 

