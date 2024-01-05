class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        n = 0
        longest = []
        for num in nums:
            n += 1
            longest.append(1)

        leng = 1
        for i in range(n):
            for j in range(0, i):
                if nums[j] < nums[i]:
                    longest[i] = max(longest[j] + 1, longest[i])
            leng = max(leng, longest[i])
        
        return leng