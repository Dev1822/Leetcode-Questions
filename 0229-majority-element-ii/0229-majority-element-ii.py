class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        res=[]
        target=len(nums)//3
        obj={}
        for i in nums:
            if i in obj:
                obj[i]+=1
            else:
                obj[i]=1
        for key,value in obj.items():
            if value>target:
                res.append(key)
        return res