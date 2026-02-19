class Solution(object):
    def checkTwoChessboards(self, coordinate1, coordinate2):
        """
        :type coordinate1: str
        :type coordinate2: str
        :rtype: bool
        """
        first1=ord(coordinate1[0])
        second1=int(coordinate1[1])
        first2=ord(coordinate2[0])
        second2=int(coordinate2[1])
        return ((first1+second1)%2==0)==((first2+second2)%2==0)