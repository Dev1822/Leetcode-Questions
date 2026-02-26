class Solution(object):
    def distinctDifferenceArray(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        length=len(nums)
        res=[0]*length
        for i in range(length):
            prefix=len(set(nums[:i+1]))
            suffix=len(set(nums[i+1:]))
            res[i]=prefix-suffix
        return res