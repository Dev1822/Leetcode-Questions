class Solution(object):
    def recoverOrder(self, order, friends):
        """
        :type order: List[int]
        :type friends: List[int]
        :rtype: List[int]
        """
        res=[]
        for i in order:
            for j in friends:
                if i==j:
                    res.append(i)
        return res