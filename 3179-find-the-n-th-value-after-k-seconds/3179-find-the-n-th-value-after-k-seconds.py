class Solution(object):
    def valueAfterKSeconds(self, n, k):
        """
        :type n: int
        :type k: int
        :rtype: int
        """
        modulo=10**9+7
        a=[1]*n
        for j in range(k):
            for i in range(1, n):
                a[i]=(a[i]+a[i-1])
        return a[n-1]%modulo