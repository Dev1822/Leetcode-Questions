class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0;
        int neg=0;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]<0){
                neg++;
            }
            else if(nums[i]>0){
                pos++;
            }
            if(nums[j]<0){
                neg++;
            }
            else if(nums[j]>0){
                pos++;
            }
            i++;
            j--;
        }
        if (i==j) {
            if (nums[i] < 0) neg++;
            else if (nums[i] > 0) pos++;
        }
        return (pos>neg) ? pos : neg;
    }
};