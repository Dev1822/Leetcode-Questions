class Solution(object):
    def stableMountains(self, height, threshold):
        """
        :type height: List[int]
        :type threshold: int
        :rtype: List[int]
        """
        res=[]
        length=len(height)
        for i in range(1,length):
            if height[i-1]>threshold:
                res.append(i)
        return res