class Solution(object):
    def findPermutationDifference(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: int
        """
        length=len(s)
        pd=0
        for i in range(length):
            for j in range(length):
                if(s[i]==t[j]):
                    pd+=abs(i-j)
        return pd