class Solution(object):
    def numberOfMatches(self, n):
        """
        :type n: int
        :rtype: int
        """
        res = 0
        while n>1:
            x=n//2
            res+=x
            if n%2==0:
                n=x
            else:
                n=x+1
        return res

        