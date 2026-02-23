class Solution(object):
    def minPartitions(self, n):
        """
        :type n: str
        :rtype: int
        """
        n=map(lambda x: int(x),n)
        return max(n)