class Solution:
    def canJump(self, nums: list) -> bool:
        goal = len(nums) - 1
        for i in range((len(nums)- 1),-1,-1):
            if i + nums[i] >= goal:
                goal = i
        return goal == 0
    
sol = Solution()
nums = [3,2,0,1,4]
print(sol.canJump(nums))
            
