class Solution(object):
    def findWordsContaining(self, words, x):
        """
        :type words: List[str]
        :type x: str
        :rtype: List[int]
        """
        result=[]
        length=len(words)
        for i in range(length):
            if x in words[i]:
                result.append(i)
        return result