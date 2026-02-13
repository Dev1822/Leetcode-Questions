class Solution(object):
    def separateDigits(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        res=[]
        for i in nums:
            num=[]
            while i>0:
                num.insert(0,i%10)
                i=i//10
            res=res+num
        return res