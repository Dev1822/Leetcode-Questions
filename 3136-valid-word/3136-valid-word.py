class Solution(object):
    def isValid(self, word):
        """
        :type word: str
        :rtype: bool
        """
        vowel=False
        consonant=False
        for i in word:
            if i in "aeiouAEIOU":
                vowel=True
            elif i.isalpha():
                consonant=True
        return vowel and consonant and len(word)>=3 and word.isalnum()