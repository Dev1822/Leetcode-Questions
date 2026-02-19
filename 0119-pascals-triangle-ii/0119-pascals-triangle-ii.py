class Solution(object):
    def getRow(self, rowIndex):
        """
        :type rowIndex: int
        :rtype: List[int]
        """
        if rowIndex==0:
            return [1]
        if rowIndex==1:
            return [1,1]
        arr=[[1],[1,1]]
        elements=1
        rowIndex+=1
        for i in range(2,rowIndex):
            x=[1]
            j=0
            previous=len(arr)-1
            while j<elements:
                x.append(arr[previous][j]+arr[previous][j+1])
                j+=1
            x.append(1)
            arr.append(x)
            elements+=1
        return arr[-1]