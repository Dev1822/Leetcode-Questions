class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int res=0;
        int sum=0;
        int i=0;
        int j=0;
        unordered_set<int> numSet={};
        while(j<nums.size()){
            if(!numSet.count(nums[j])){
                numSet.insert(nums[j]);
                sum+=nums[j];
                res=max(res,sum);
                j++;
            }
            else{
                numSet.erase(nums[i]);
                sum-=nums[i];
                i++;
            }
        }
        return res;
    }
};