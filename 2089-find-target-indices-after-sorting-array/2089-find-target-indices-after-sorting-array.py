class Solution(object):
    def targetIndices(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        nums.sort()
        result=[]
        length=len(nums)
        for i in range(length):
            if nums[i]==target:
                result.append(i)

        return result