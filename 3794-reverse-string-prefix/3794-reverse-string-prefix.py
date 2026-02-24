class Solution(object):
    def reversePrefix(self, s, k):
        """
        :type s: str
        :type k: int
        :rtype: str
        """
        a=s[:k]
        a=a[::-1]
        b=s[k:]
        return a+b

        