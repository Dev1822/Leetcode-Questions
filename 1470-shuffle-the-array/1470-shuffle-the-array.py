class Solution(object):
    def shuffle(self, nums, n):
        """
        :type nums: List[int]
        :type n: int
        :rtype: List[int]
        """
        length=2*n
        res=[0]*length
        for i in range(0,length,2):
            res[i]=nums[i//2]
            res[i+1]=nums[i//2+n]
        return res