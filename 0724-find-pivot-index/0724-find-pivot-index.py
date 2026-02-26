class Solution(object):
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        length=len(nums)
        leftSum=[0]*length
        rightSum=[0]*length
        ls=0
        rs=0
        right=length-1
        for i in range(length):
            leftSum[i]=ls
            rightSum[right]=rs
            rs+=nums[right]
            ls+=nums[i]
            right-=1
        for i in range(length):
            if leftSum[i]==rightSum[i]:
                return i
        return -1