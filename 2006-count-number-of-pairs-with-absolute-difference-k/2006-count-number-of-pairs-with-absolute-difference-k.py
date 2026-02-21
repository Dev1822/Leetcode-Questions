class Solution(object):
    def countKDifference(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: int
        """
        count=0
        length=len(nums)
        for i in range(length):
            for j in range(i+1,length):
                if abs(nums[i]-nums[j])==k:
                    count+=1

        return count