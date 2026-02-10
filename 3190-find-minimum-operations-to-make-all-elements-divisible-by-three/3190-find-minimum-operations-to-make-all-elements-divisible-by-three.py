class Solution(object):
    def minimumOperations(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        length=len(nums)
        count=0
        for i in range(length):
            if nums[i]%3!=0:
                count+=1
        return count

        