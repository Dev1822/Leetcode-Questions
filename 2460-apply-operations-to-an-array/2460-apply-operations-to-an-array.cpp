class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int length=nums.size();
        for(int i=0;i<length-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        vector <int> res(length,0);
        int j=0;
        for(int i : nums){
            if(i!=0){
                res[j]=i;
                j++;
            }
        }
        return res;
    }
};