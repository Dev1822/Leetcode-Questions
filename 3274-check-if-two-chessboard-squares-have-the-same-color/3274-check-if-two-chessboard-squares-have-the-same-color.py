class Solution(object):
    def checkTwoChessboards(self, coordinate1, coordinate2):
        """
        :type coordinate1: str
        :type coordinate2: str
        :rtype: bool
        """
        result=0
        result+=ord(coordinate1[0])
        result+=int(coordinate1[1])
        result+=ord(coordinate2[0])
        result+=int(coordinate2[1])
        return result%2==0