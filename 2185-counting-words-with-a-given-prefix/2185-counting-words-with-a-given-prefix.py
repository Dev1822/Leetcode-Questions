class Solution(object):
    def prefixCount(self, words, pref):
        """
        :type words: List[str]
        :type pref: str
        :rtype: int
        """
        searchlength=len(pref)
        length=len(words)
        count=0
        for i in range(length):
            if words[i][:searchlength]==pref:
                count+=1
        return count