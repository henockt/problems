# Problem: Find Target Indices After Sorting Array - https://leetcode.com/problems/find-target-indices-after-sorting-array/

class Solution:
    def targetIndices(self, nums: List[int], target: int) -> List[int]:
        return [x for x in range(bisect_left(sorted(nums), target), bisect_right(sorted(nums), target))]