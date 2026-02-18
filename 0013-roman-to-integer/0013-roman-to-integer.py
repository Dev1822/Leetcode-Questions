class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        dict1={"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000}
        number=0
        length=len(s)
        for i in range(length):
            if i<length-1 and dict1[s[i]]<dict1[s[i+1]]:
                number-=dict1[s[i]]
            else:
                number+=dict1[s[i]]
        return number