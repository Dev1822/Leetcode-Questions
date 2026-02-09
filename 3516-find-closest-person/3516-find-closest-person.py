class Solution(object):
    def findClosest(self, x, y, z):
        """
        :type x: int
        :type y: int
        :type z: int
        :rtype: int
        """
        dx = x-z
        dy = y-z
        if dx<0:
            dx=0-dx
        if dy<0:
            dy=0-dy

        if dx < dy:
            return 1
        elif dy < dx:
            return 2
        else:
            return 0