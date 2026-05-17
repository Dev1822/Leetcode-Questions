class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int length=nums.size()-1;
        if(length==-1) return 0;
        int max=0;
        int count=0;
        for(int i=0;i<length;i++){
            if(nums[i]==nums[i+1]){
                continue;
            }
            if(nums[i]+1==nums[i+1]){
                count++;
            }
            else{
                if(count>max){
                    max=count;
                }
                count=0;
            }
        }
        if(count>max){
            max=count;
        }
        return max+1;
    }
};