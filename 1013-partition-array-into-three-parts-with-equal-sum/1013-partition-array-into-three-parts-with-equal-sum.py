class Solution(object):
    def canThreePartsEqualSum(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        s=0
        for i in arr:
            s+=i
        if s%3!=0:
            return False
        partition=s//3
        count=0
        x=0
        for i in arr:
            x+=i
            if x==partition:
                count+=1
                x=0
        return count>=3

