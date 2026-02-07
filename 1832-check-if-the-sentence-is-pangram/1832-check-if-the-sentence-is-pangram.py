class Solution(object):
    def checkIfPangram(self, sentence):
        """
        :type sentence: str
        :rtype: bool
        """
        length=len(sentence)
        for i in range(97,123):
            x=chr(i)
            check=False
            for j in range(length):
                if x==sentence[j]:
                    check=True
                    break
            if not check:
                return False

        return True
        
        