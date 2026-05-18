class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=nums[0];
        int length=nums.size();
        for(int i=1;i<length;i++){
            sum+=nums[i];
            nums[i]=sum;
        }
        return nums;
    }
};