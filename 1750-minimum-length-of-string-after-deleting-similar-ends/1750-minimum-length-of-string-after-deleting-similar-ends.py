class Solution(object):
    def minimumLength(self, s):
        """
        :type s: str
        :rtype: int
        """
        i=0
        j=len(s)-1
        x=s
        while i<j and s[i]==s[j]:
            ch=s[i]
            while i<=j and s[i]==ch:
                i+=1
            while i<=j and s[j]==ch:
                j-=1
        
        return j-i+1 if i<=j else 0
            
