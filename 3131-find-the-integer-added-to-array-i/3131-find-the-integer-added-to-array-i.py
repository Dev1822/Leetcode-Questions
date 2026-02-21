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
            ae=nums2[i]
            be=nums1[i]
            if a<ae:
                a=ae
            if b<be:
                b=be
        return a-b