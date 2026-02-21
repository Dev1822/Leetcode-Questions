class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        last = len(digits) - 1

        if digits[last] != 9:
            digits[last] += 1
        else:
            i = last
            while i >= 0 and digits[i] == 9:
                digits[i] = 0
                i -= 1

            if i >= 0:
                digits[i] += 1
            else:
                digits.insert(0, 1)

        return digits