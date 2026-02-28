class Solution(object):
    def kthLargestNumber(self, nums, k):
        """
        :type nums: List[str]
        :type k: int
        :rtype: str
        """
        res=[int(i) for i in nums]
        res.sort()
        return str(res[-k])