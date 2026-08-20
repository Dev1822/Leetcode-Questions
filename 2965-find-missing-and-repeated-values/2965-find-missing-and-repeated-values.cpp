class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=pow(grid.size(),2);
        vector <int> nums={};
        for(auto& i : grid){
            for(int j : i){
                nums.push_back(j);
            }
        }
        sort(nums.begin(),nums.end());
        vector <int> res={};
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                res.push_back(nums[i]);
                break;
            }
        }
        for(int i=1;i<=n;i++){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
                res.push_back(i);
                break;
            }
        }
        return res;
    }
};