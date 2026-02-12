class Solution(object):
    def reverseDegree(self, s):
        """
        :type s: str
        :rtype: int
        """
        count=0
        length=len(s)
        for i in range(length):
            count+=(((97-ord(s[i])+26))*(i+1))
        return count
        