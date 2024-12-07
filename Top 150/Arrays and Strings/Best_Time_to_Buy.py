class Solution:
    def maxProfit(self, prices: list) -> int:
        min_p = float('inf')
        max_profit = 0

        for price in prices:

            if price < min_p:
                min_p = price
            
            curr_p = price - min_p

            if curr_p > max_profit:
                max_profit = curr_p
        
        return max_profit

sol = Solution()
prices = [7,1,5,3,6,4]
print(sol.maxProfit(prices))