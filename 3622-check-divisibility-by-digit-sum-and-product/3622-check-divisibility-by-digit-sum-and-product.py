class Solution(object):
    def checkDivisibility(self, n):
        """
        :type n: int
        :rtype: bool
        """
        s=0
        p=1
        N=n
        while(n>0):
            a=n%10
            s+=a
            p*=a
            n//=10
        return (N%(s+p)==0)