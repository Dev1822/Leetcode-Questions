#include <algorithm>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int length=strs.size();
        vector <vector<string>> res={};
        unordered_map <string,vector<string>> check={};
        for(string i : strs){
            string x=i;
            sort(x.begin(), x.end());
            if(check.find(x)!=check.end()){
                check[x].push_back(i);
            }
            else{
                check[x]={i};
            }
        }

        for(auto& [key,value] : check){
            res.push_back(value);
        }
        return res;
        
    }
};