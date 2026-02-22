class Solution(object):
    def findTheArrayConcVal(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        c=0
        i=0
        j=len(nums)-1
        while(i<=j):
            if(i==j):
                c+=nums[i]
            else:
                c+=int(str(nums[i])+str(nums[j]))
            i+=1
            j-=1
        return c