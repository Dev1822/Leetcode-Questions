class Solution(object):
    def checkPowersOfThree(self, n):
        """
        :type n: int
        :rtype: bool
        """
        x=0
        y=3**x
        while y<=n:
            x+=1
            y=3**x
        res=0
        while x>=0:
            if n>=y:
                n-=y
            x-=1
            y=3**x
        return n==0