class Solution(object):
    def alternateDigitSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        sum=0
        n=str(n)
        length=len(n)
        for i in range(length):
            x=int(n[i])
            if i%2==0:
                sum+=x
            else:
                sum-=x
        return sum