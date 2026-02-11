class Solution(object):
    def shuffle(self, nums, n):
        """
        :type nums: List[int]
        :type n: int
        :rtype: List[int]
        """
        res=[0]*(2*n)
        for i in range(0,2*n,2):
            res[i]=nums[i//2]
            res[i+1]=nums[i//2+n]
        return res