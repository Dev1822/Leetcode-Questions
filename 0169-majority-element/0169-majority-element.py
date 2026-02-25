class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        obj = {}
        for i in nums:
            if i in obj:
                obj[i] += 1
            else:
                obj[i] = 1
        for key, value in obj.items():
            if value > len(nums) / 2:
                return key