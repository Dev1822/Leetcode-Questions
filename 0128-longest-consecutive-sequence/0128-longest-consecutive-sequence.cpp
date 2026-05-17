class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int length=nums.size();
        if(length==0) return 0;
        sort(nums.begin(),nums.end());
        int count=0;
        int max=0;
        for(int i=0;i<length-1;i++){
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