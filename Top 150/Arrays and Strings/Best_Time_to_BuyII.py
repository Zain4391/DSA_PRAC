class Solution:
    def maxProfit(self, prices: list) -> int:
        profit = 0

        for i in range(1, len(prices)):
            if prices[i] > prices[i - 1]:
                profit += prices[i] - prices[i - 1]
        return profit

sol = Solution()
prices = [7,1,5,3,6,4]
print(sol.maxProfit(prices))