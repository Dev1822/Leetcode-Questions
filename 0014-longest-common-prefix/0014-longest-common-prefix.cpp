class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res=strs[0];
        bool found=true;
        while(true){
            for(string i : strs){
                if(i.find(res)!=0){
                    res.pop_back();
                    found=false;
                    break;
                }
                else{
                    found=true;
                }
            }
            if(found){
                return res;
            }
        }
        return res;
    }
};