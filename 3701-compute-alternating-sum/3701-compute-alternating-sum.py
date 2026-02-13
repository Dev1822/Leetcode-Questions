class Solution(object):
    def alternatingSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        sum=0
        length=len(nums)
        for i in range(length):
            x=nums[i]
            if i%2==0:
                sum+=x
            else:
                sum-=x
        return sum