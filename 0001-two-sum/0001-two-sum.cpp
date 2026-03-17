class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int len=nums.size();
        int sum=0;
        for(int i=0;i<len;i++){
            for(int j=i+1;j<len;j++){
                sum=nums[i]+nums[j];
                if(sum==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};