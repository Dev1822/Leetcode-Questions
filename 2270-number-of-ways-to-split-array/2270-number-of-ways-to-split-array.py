class Solution(object):
    def waysToSplitArray(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        count=0
        right=0
        for i in nums:
            right+=i
        left=0
        length=len(nums)
        for i in range(length-1):
            x=nums[i]
            left+=x
            right-=x
            if left>=right:
                count+=1
        return count