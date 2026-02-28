class Solution(object):
    def maxProductDifference(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        largest=float("-inf")
        secondlargest=float("-inf")
        smallest=float("inf")
        secondsmallest=float("inf")
        for i in nums:
            if i>largest:
                secondlargest=largest
                largest=i
            elif i>secondlargest:
                secondlargest=i
            if i<smallest:
                secondsmallest=smallest
                smallest=i
            elif i<secondsmallest:
                secondsmallest=i
        return (largest*secondlargest)-(smallest*secondsmallest)