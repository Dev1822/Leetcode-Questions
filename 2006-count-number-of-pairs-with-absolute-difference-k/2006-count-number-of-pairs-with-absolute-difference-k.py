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
                sum=nums[i]-nums[j]
                if sum==k or 0-sum==k:
                    count+=1

        return count