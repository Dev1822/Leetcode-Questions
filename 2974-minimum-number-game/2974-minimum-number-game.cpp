class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int length=nums.size();
        for(int i=0;i<length;i+=2){
            int x=nums[i];
            nums[i]=nums[i+1];
            nums[i+1]=x;
        }
        return nums;
    }
};