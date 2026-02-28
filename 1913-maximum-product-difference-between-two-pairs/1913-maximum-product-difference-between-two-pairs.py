class Solution(object):
    def maxProductDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        largest=max(nums)
        nums.remove(largest)
        secondlargest=max(nums)
        smallest=min(nums)
        nums.remove(smallest)
        secondsmallest=min(nums)
        return (largest*secondlargest)-(smallest*secondsmallest)