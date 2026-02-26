class Solution(object):
    def leftRightDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        length=len(nums)
        leftSum=[0]*length
        rightSum=[0]*length
        for i in range(length):
            leftSum[i]=sum(nums[:i])
            rightSum[i]=sum(nums[i+1:])
        res=[0]*length
        for i in range(length):
            res[i]=abs(leftSum[i]-rightSum[i])
        return res