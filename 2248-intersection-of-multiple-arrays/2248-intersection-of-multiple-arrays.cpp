class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map <int,int> count={};
        for(auto& i : nums){
            for(int j : i){
                count[j]++;
            }
        }
        int length=nums.size();
        vector <int> res={};
        for(auto& [key,value] : count){
            if(value==length){
                res.push_back(key);
            }
        }
        return res;
    }
};