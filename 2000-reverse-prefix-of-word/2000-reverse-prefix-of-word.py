class Solution(object):
    def reversePrefix(self, word, ch):
        """
        :type word: str
        :type ch: str
        :rtype: str
        """
        first=""
        second=""
        found=False
        for i in word:
            if found:
                second+=i
            else:
                first+=i
            if i==ch:
                found=True
        if not found:
            return word
        return first[::-1]+second