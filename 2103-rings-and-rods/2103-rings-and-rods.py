class Solution(object):
    def countPoints(self, rings):
        """
        :type rings: str
        :rtype: int
        """
        length=len(rings)
        m={}
        for i in range(1,length,2):
            x=rings[i]
            if x in m:
                m[x].add(rings[i-1])
            else:
                m[x]={rings[i-1]}
        count=0
        for i in m:
            if "R" in m[i] and "G" in m[i] and "B" in m[i]:
                count+=1
        return count