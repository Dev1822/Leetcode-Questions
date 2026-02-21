class Solution(object):
    def search(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
        i = 0
        j = len(nums) - 1
        present = False
        middle = -1

        while i <= j:
            middle = (i + j) // 2

            if target < nums[middle]:
                j = middle - 1
            elif target > nums[middle]:
                i = middle + 1
            else:
                present = True
                break

        if present:
            return middle
        else:
            return -1