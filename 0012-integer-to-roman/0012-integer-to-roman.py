class Solution(object):
    def intToRoman(self, num):
        """
        :type num: int
        :rtype: str
        """
        dict1={1:"I",5:"V",10:"X",50:"L",100:"C",500:"D",1000:"M"}
        arr=[1,5,10,50,100,500,1000]
        numstr=str(num)
        length=len(numstr)
        digits=length
        roman=""
        for i in range(length):
            x=int(numstr[i])
            a=10**(digits-1)
            if x==4:
                roman+=dict1[a]+dict1[5*a]
            elif x==9:
                roman+=dict1[a]+dict1[10*a]
            else:
                value=x*a
                while value>=5*a:
                    roman+=dict1[5*a]
                    value-=5*a
                while value>0:
                    roman+=dict1[a]
                    value-=a
            digits-=1
        return roman

