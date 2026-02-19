class Solution(object):
    def maxProduct(self, n):
        """
        :type n: int
        :rtype: int
        """
        n=str(n)
        first=0
        second=0
        for i in n:
            x=int(i)
            if x>first:
                second=first
                first=x
            elif x>second:
                second=x
        return first*second