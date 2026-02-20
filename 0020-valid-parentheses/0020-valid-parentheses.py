class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        obj = {"(": ")", "[": "]", "{": "}"}
        arr = []
        length = len(s)
        k=obj.keys()
        for i in s:
            if i in k:
                arr.append(i)
            else:
                if len(arr)==0:
                    return False
                if i==obj[arr[-1]]:
                    arr.pop()
                else:
                    return False
        return len(arr)==0