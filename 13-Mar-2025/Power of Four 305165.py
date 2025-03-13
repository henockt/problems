# Problem: Power of Four - https://leetcode.com/problems/power-of-four/

class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n < 0: 
            return False
        k = (len(bin(n)) - len(bin(n).rstrip("0")))
        return k % 2 == 0 and bin(n).count("1") == 1