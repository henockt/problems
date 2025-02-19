# Problem: Product of Array Except Self - https://leetcode.com/problems/product-of-array-except-self/

class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        pf, sf = [1] * n, [1] * n
        ze = [0] * n
        for i in range(n):
            if nums[i] != 0:
                pf[i] = nums[i]
                sf[i] = nums[i]
            else:
                ze[i] = 1
            if i:
                ze[i] += ze[i-1]
        for i in range(1, n):
            pf[i] *= pf[i-1]
            sf[-(i + 1)] *= sf[-i]
        
        ans = [0] * n
        if ze[-1]-ze[0] == 0: ans[0] = sf[1]
        if ze[-2] == 0: ans[-1] = pf[-2]
        for i in range(1, n-1):
            prev = pf[i-1]
            if ze[i-1]: prev = 0
            
            nxt = sf[i+1]
            if ze[-1]-ze[i] > 0: nxt = 0
            
            ans[i] = prev * nxt
        
        return ans