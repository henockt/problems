class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        coll = {}
        count = 0
        ops = 0
        for i in range(len(nums) - 1, -1, -1):
            num = nums[i]
            ops += 1
            if num <= k:
                if not coll.get(num):
                    coll[num] = True
                    count += 1
                    if count == k:
                        return ops