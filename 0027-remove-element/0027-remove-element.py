class Solution(object):
    def removeElement(self, nums, val):
        """
        :type nums: List[int]
        :type val: int
        :rtype: int
        """
        count=0
        arr=[]
        length=len(nums)
        for i in range(length):
            if nums[i]==val:
                count+=1
                continue
            else:
                arr.append(nums[i])
        length2=len(arr)
        for i in range(length2):
            nums[i]=arr[i]

        return length-count