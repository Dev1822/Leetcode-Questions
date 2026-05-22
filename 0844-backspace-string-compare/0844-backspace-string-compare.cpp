class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string sString="";
        for(char i : s){
            if(i=='#'){
                if(sString!=""){
                    sString.pop_back();
                }
            }
            else{
                sString+=i;
            }
        }
        string tString="";
        for(char i : t){
            if(i=='#'){
                if(tString!=""){
                    tString.pop_back();
                }
            }
            else{
                tString+=i;
            }
        }
        return sString==tString;
    }
};