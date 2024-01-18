class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        min1, min2 = min(prices[0], prices[1]), max(prices[0], prices[1])

        for i in range(2, len(prices)):
            num = prices[i]
            if num < min2 and num < min1:
                min2 = min1
                min1 = num
            elif num < min2:
                min2 = num
            
            if min1 == min2 == 1:
                break
        
        tp = min1 + min2

        if tp > money:
            return money
        else:
            return money - tp