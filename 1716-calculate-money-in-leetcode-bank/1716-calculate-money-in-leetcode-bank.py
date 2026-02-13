class Solution(object):
    def totalMoney(self, n):
        """
        :type n: int
        :rtype: int
        """
        count=0
        day=0
        a=1
        b=1
        for i in range(n):
            count+=a
            a+=1
            day+=1
            if day%7==0:
                b+=1
                a=b
                day=0
        return count