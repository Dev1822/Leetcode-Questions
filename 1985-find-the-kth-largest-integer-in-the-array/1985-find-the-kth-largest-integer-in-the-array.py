class Solution(object):
    def kthLargestNumber(self, nums, k):
        """
        :type nums: List[str]
        :type k: int
        :rtype: str
        """
        nums=map(lambda x:int(x),nums)
        for i in range(k-1):
            nums.remove(max(nums))
        return str(max(nums))