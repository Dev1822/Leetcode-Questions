class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map <int,int> freq={};
        for(auto& i :nums){
            for(int j : i){
                freq[j]++;
            }
        }
        int length=nums.size();
        vector <int> res={};
        for(auto& [key,value] : freq){
            if(value==length){
                res.push_back(key);
            }
        }
        return res;
    }
};