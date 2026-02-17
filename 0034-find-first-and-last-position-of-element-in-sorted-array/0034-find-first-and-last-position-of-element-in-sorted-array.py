class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        length=len(nums)
        i=0
        while i<length and nums[i]!=target:
            i+=1
        if i==length:
            return [-1, -1]
        j=i
        while j<length and nums[j]==target:
            j+=1
        
        return [i,j-1]    