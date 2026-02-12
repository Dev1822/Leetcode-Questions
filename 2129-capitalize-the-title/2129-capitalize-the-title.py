class Solution(object):
    def capitalizeTitle(self, title):
        """
        :type title: str
        :rtype: str
        """
        title=title.split(" ")
        length=len(title)
        for i in range(length):
            if len(title[i])>2:
                title[i]=title[i].title()
            else:
                title[i]=title[i].lower()
        return " ".join(title)