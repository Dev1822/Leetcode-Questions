class Solution(object):
    def leftRightDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        length=len(nums)
        leftSum=[0]*length
        rightSum=[0]*length
        ls=0
        rs=0
        for i in range(length):
            leftSum[i]=ls
            rightSum[length-i-1]=rs
            rs+=nums[length-i-1]
            ls+=nums[i]
        res=[0]*length
        for i in range(length):
            s=leftSum[i]-rightSum[i]
            if s<0:
                s=0-s
            res[i]=s
        return res