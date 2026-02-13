class Solution(object):
    def getLucky(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: int
        """
        res=""
        for i in s:
            res+=str((ord(i)-ord("a"))+1)
        res=int(res)
        sum=0
        x=0
        while x<k:
            sum=0
            while res>0:
                sum+=res%10
                res=res//10
            res=sum
            x+=1
        return sum