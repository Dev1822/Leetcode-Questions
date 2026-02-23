class Solution(object):
    def isValid(self, word):
        """
        :type word: str
        :rtype: bool
        """
        length=len(word)
        if length<3:
            return False
        if not word.isalnum():
            return False
        vowels="aeiouAEIOU"
        vowel=False
        consonant=False
        for i in word:
            if i in vowels:
                vowel=True
            elif i.isalpha():
                consonant=True
        return vowel and consonant