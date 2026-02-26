class Solution(object):
    def leftRightDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        leftSum=[]
        rightSum=[]
        length=len(nums)
        for i in range(length):
            leftSum.append(sum(nums[:i]))
            rightSum.append(sum(nums[i+1:]))
        res=[0]*length
        for i in range(length):
            res[i]=abs(leftSum[i]-rightSum[i])
        return res