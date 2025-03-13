# Problem: Find Kth Bit in Nth Binary String - https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/

class Solution:
    def findKthBit(self, n: int, k: int) -> str:
        def f(x, inv):
            if x == 1:
                return "1" if inv else "0"
            t = floor(log2(x))
            # [1, z-1] [z] [z+1, ...]
            z = (1 << t)
            if x == z:
                return "0" if inv else "1"
            return f(2*z - x, not inv)

        return f(k, False)