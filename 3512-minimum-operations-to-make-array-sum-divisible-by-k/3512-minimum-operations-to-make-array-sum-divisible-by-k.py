class Solution(object):
    def minOperations(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        i=0
        j=len(nums)-1
        arrSum=0
        while i<=j:
            if i==j:
                arrSum+=nums[i]
            else:
                arrSum+=nums[i]+nums[j]
            i=i+1
            j=j-1

        return arrSum%k
        

        