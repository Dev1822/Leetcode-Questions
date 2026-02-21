class Solution(object):
    def scoreOfString(self, s):
        """
        :type s: str
        :rtype: int
        """
        count = 0
        length=len(s)-1
        for i in range(length):
            x = ord(s[i]) - ord(s[i + 1])
            if x < 0:
                x = -x
            count += x
        return count