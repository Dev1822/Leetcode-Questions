class Solution(object):
    def checkDivisibility(self, n):
        """
        :type n: int
        :rtype: bool
        """
        sum=0
        product=1
        temp=n
        while temp>0:
            last=temp%10
            sum+=last
            product=product*last
            temp=temp//10

        return n%(sum+product)==0