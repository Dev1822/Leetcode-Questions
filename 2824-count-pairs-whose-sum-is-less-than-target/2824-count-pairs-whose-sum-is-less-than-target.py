class Solution(object):
    def countPairs(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        length=len(nums)
        count=0
        for i in range(length):
            for j in range(i+1,length):
                if nums[i]+nums[j]<target:
                    count+=1
        return count