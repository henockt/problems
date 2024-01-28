class Solution:
    def maxAscendingSum(self, nums) -> int:
        left, right = 0, 1
        leng = len(nums)

        sm = 0

        if leng == 1:
            return nums[0]
        elif leng == 2:
            if nums[1] > nums[0]:
                return sum(nums)
            else:
                return max(nums[0], nums[1])

        while right < leng:
            currSum = nums[left]
            prev = nums[left]
            while nums[right] > prev:
                prev = nums[right]
                right += 1
                currSum += prev
                if right >= leng:
                    break
            
            left = right
            right += 1

            sm = max(currSum, sm)

        return sm

print(Solution().maxAscendingSum([100,10,1]))