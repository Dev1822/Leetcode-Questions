class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector <int> res={};
        for(int i=nums[0];i<=nums[nums.size()-1];i++){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};