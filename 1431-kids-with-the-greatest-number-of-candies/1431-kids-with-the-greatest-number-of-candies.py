class Solution(object):
    def kidsWithCandies(self, candies, extraCandies):
        """
        :type candies: List[int]
        :type extraCandies: int
        :rtype: List[bool]
        """
        largest=candies[0]
        for i in candies:
            if i>largest:
                largest=i
        return [(x+extraCandies)>=largest for x in candies]