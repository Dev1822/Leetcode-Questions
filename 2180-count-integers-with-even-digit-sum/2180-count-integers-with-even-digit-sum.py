class Solution(object):
    def countEven(self, num):
        """
        :type num: int
        :rtype: int
        """
        count=0
        for i in range(1,num+1):
            sum=0
            while i>0:
                sum+=i%10
                i=i//10
            if sum%2==0:
                count+=1
        return count