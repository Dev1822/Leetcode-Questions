class Solution(object):
    def differenceOfSum(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        elements=0
        digits=0
        for i in nums:
            elements+=i
            while i>0:
                digits+=i%10
                i=i//10
        res=elements-digits
        if res<0:
            res=0-res
        return res
