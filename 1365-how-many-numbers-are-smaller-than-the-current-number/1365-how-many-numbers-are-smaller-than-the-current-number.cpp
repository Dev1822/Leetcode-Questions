class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int length=nums.size();
        vector <int> res(length,0);
        for(int i=0;i<length;i++){
            int count=0;
            for(int j=0;j<length;j++){
                if(nums[j]<nums[i]){
                    count++;
                }
            }
            res[i]=count;
        }
        return res;
    }
};