class Solution(object):
    def maximumWealth(self, accounts):
        """
        :type accounts: List[List[int]]
        :rtype: int
        """
        largest=float('-inf')
        for i in accounts:
            count=0
            for j in i:
                count+=j
            if count>largest:
                largest=count
        return largest