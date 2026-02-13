class Solution(object):
    def alternatingSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        sum=0
        length=len(nums)
        for i in range(length):
            if i%2==0:
                sum+=nums[i]
            else:
                sum-=nums[i]
        return sum