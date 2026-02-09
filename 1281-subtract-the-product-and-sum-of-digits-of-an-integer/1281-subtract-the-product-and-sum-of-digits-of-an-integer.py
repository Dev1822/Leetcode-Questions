class Solution(object):
    def subtractProductAndSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        temp=n
        sum=0
        product=1
        while temp>0:
            last=temp%10
            sum+=last
            product*=last
            temp=temp//10
        
        return product-sum