class Solution(object):
    def addedInteger(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: int
        """
        a=nums2[0]
        b=nums1[0]
        length=len(nums1)
        for i in range(length):
            if a<nums2[i]:
                a=nums2[i]
            if b<nums1[i]:
                b=nums1[i]
        return a-b