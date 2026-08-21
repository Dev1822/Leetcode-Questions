class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int count=0;
        int left=nums[0];
        int right=0;
        for(int i=1;i<nums.size();i++){
            right+=nums[i];
        }
        if((left-right)%2==0) count++;
        for(int i=1;i<nums.size()-1;i++){
            left+=nums[i];
            right-=nums[i];
            if((left-right)%2==0) count++;
        }
        return count;
    }
};