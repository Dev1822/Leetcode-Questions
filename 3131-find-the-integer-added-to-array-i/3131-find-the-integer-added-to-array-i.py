class Solution(object):
    def addedInteger(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: int
        """
        a=nums2[0]
        for i in nums2:
            if i<a:
                a=i
        b=nums1[0]
        for i in nums1:
            if i<b:
                b=i
        return a-b