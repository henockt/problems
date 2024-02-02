class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        leng = len(prices)
        profit = 0

        # find first valid profit
        left = prices[0]
        ind = 0
        for i, num in enumerate(prices):
            if left < num:
                ind = i-1
                break
            left = num
    
        mn = prices[ind]
        for i in range(ind, leng):
            mn = min(mn, prices[i])
            profit = max(profit, prices[i]-mn)
      

        return profit