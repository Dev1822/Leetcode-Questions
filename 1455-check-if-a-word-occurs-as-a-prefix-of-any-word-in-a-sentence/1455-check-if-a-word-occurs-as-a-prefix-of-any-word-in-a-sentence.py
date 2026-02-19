class Solution(object):
    def isPrefixOfWord(self, sentence, searchWord):
        """
        :type sentence: str
        :type searchWord: str
        :rtype: int
        """
        arr=sentence.split(" ")
        searchlength=len(searchWord)
        length=len(arr)
        for i in range(length):
            if arr[i][:searchlength]==searchWord:
                return i+1
        return -1