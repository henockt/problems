class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        const = 0
        d = {}

        for num in nums:
            if d.get(num):
                const -= num
            else:
                const += num
                d[num] = num

        return const