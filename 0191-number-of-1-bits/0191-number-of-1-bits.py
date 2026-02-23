class Solution(object):
    def hammingWeight(self, n):
        """
        :type n: int
        :rtype: int
        """
        n=int(bin(n)[2:])
        s=0
        while n>0:
            s+=n%10
            n=n//10
        return s