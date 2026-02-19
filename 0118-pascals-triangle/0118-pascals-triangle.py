class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        if numRows==1:
            return [[1]]
        if numRows==2:
            return [[1],[1,1]]
        arr=[[1],[1,1]]
        elements=1
        for i in range(2,numRows):
            x=[1]
            j=0
            previous=len(arr)-1
            while j<elements:
                x.append(arr[previous][j]+arr[previous][j+1])
                j+=1
            x.append(1)
            arr.append(x)
            elements+=1
        return arr