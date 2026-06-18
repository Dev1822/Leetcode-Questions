class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int length=nums.size();
        int leftSum=0;
        int rightSum=0;
        for(int i=0;i<length;i++){
            rightSum+=nums[i];
        }
        vector <int> res={};
        for(int i=0;i<length;i++){
            rightSum-=nums[i];
            res.push_back(abs(leftSum-rightSum));
            leftSum+=nums[i];
        }
        return res;
    }
};