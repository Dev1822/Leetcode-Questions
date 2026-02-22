class Solution(object):
    def findTheArrayConcVal(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        length=len(nums)
        concatenation=0
        while length>1:
            x=str(nums[0])+str(nums[-1])
            concatenation+=int(x)
            nums=nums[1:length-1]
            length=len(nums)
        if length==1:
            concatenation+=nums[0]
        return concatenation