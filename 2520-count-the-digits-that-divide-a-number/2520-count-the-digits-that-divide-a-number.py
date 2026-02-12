class Solution(object):
    def countDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        temp=num
        count=0
        while temp>0:
            x=temp%10
            if num%x==0:
                count+=1
            temp=temp//10
        return count