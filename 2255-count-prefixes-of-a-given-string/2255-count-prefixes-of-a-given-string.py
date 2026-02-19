class Solution(object):
    def countPrefixes(self, words, s):
        """
        :type words: List[str]
        :type s: str
        :rtype: int
        """
        length=len(words)
        count=0
        for i in range(length):
            x=words[i]
            searchlength=len(x)
            if s[:searchlength]==x:
                count+=1
        return count