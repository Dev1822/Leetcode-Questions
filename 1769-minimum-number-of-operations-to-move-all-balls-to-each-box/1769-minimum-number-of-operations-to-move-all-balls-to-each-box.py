class Solution(object):
    def minOperations(self, boxes):
        """
        :type boxes: str
        :rtype: List[int]
        """
        n=len(boxes)
        res=[0]*n
        for i in range(n):
            for j in range(n):
                if boxes[j]=='1':
                    x=i-j
                    if x<0:
                        x=0-x
                    res[i]+=x

        return res
        