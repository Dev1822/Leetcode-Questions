class Solution(object):
    def lastElement(self,n):
        sum=0
        while n>0:
            sum+=n%10
            n=n//10
        return sum
    def minElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        arr=list(map(self.lastElement,nums))
        min=arr[0]
        for i in arr:
            if i<min:
                min=i
        return min