class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int length=nums.size();
        int sum=nums[0];
        for(int i=1;i<length;i++){
            sum+=nums[i];
            nums[i]=sum;
        }
        return nums;
    }
};