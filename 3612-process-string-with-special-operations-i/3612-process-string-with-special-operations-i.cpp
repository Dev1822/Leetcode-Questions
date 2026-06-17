class Solution {
public:
    string processStr(string s) {
        string result="";
        for(char i : s){
            if(i=='#'){
                result+=result;
            }
            else if(i=='*'){
                if(result.size()!=0){
                    result.pop_back();
                }
            }
            else if(i=='%'){
                if(result.size()!=0){
                    reverse(result.begin(),result.end());
                }
            }
            else{
                result.push_back(i);
            }
        }
        return result;
    }
};