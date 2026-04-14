class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int length=strs.size();
        int loop=true;
        int index=0;
        string x="";
        while(loop && strs[0][index]){
            x+=strs[0][index];
            for(string i : strs){
                if(i.find(x)!=0){
                    loop=false;
                    break;
                }
            }
            if(loop){
                res=x;
            }
            index++;
        }
        return res;
    }
};