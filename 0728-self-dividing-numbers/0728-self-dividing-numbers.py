class Solution(object):
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        res=[]
        for i in range(left,right+1):
            x=i
            sd=True
            while x>0:
                last=x%10
                if last!=0:
                    if i%(x%10)!=0:
                        sd=False
                        break
                    x=x//10
                else:
                    sd=False
                    break
            if sd:
                res.append(i)
        return res