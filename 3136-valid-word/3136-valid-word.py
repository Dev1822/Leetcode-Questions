class Solution(object):
    def isValid(self, word):
        """
        :type word: str
        :rtype: bool
        """
        length=len(word)
        vowels="aeiouAEIOU"
        vowel=False
        consonant=False
        for i in word:
            if i in vowels:
                vowel=True
            elif i.isalpha():
                consonant=True
        return vowel and consonant and length>=3 and word.isalnum()