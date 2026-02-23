class Solution(object):
    def convertDateToBinary(self, date):
        """
        :type date: str
        :rtype: str
        """
        datearr=date.split('-')
        datebin=map(lambda x: bin(int(x))[2:], datearr)
        return "-".join(datebin)