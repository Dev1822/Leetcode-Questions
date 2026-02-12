class Solution(object):
    def sumOfTheDigitsOfHarshadNumber(self, x):
        """
        :type x: int
        :rtype: int
        """
        sum=0
        temp=x
        while temp>0:
            sum+=temp%10
            temp=temp//10
        if x%sum==0:
            return sum
        else:
            return -1