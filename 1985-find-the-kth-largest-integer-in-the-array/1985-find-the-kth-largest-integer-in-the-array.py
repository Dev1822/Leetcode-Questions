class Solution(object):
    def kthLargestNumber(self, nums, k):
        """
        :type nums: List[str]
        :type k: int
        :rtype: str
        """
        length=len(nums)
        res=[0]*length
        for i in range(length):
            res[i]=int(nums[i])
        res.sort()
        return str(res[-k])