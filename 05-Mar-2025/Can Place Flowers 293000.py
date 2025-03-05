# Problem: Can Place Flowers - https://leetcode.com/problems/can-place-flowers/

class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], k: int) -> bool:
        cnt = 0
        n = len(flowerbed)
        flowerbed = [0] + flowerbed + [0]
        for i in range(1, n + 1):
            if flowerbed[i+1] == 0 and flowerbed[i] == 0 and flowerbed[i-1] == 0:
                flowerbed[i] = 1
                cnt += 1
        return cnt >= k