class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        leng = 0
        
        numToCount = {}
        repeated = nums[0]
        missing = nums[1]

        for num in nums:
            if numToCount.get(num):
                repeated = num
            else:
                numToCount[num] = 1
            
            leng += 1
        
        for i in range(1, leng + 1):
            if not numToCount.get(i):
                missing = i
                break
        
        return [repeated, missing]