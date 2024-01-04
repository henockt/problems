class Solution:
    def minOperations(self, nums: List[int]) -> int:
        valOcc = {}

        for num in nums:
            if valOcc.get(num):
                valOcc[num] += 1
            else:
                valOcc[num] = 1
        
        operations = 0
        for key, value in valOcc.items():
            if value == 1:
                return -1

            a = value // 3
            b = value % 3

            while b % 2 != 0: # can be replaced with just an if statement
                a -= 1
                b = value - (3 * a)
            
            operations += a + (b // 2)
            
        
        return operations 