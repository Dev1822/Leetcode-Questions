class Solution {
public:
    string finalString(string s) {
        string res="";
        for(char i : s){
            if(i=='i'){
                reverse(res.begin(),res.end());
            }
            else{
                res+=i;
            }
        }
        return res;
    }
};