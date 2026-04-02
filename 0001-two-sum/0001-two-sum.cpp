class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> um;
        int diff;
        int length=nums.size();
        for(int i=0;i<length;i++){
            diff=target-nums[i];
            if(um.count(diff)){
                return {i,um[diff]};
            }
            um[nums[i]]=i;
        }
        return {};
    }
};