class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res=strs[0];
        for(string i :strs){
            while(i.find(res)!=0){
                res.pop_back();
            }
        }
        return res;
    }
};