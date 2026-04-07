class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int position=0;
        int length=nums.size();
        for(int i : nums){
            if(i!=0){
                nums[position]=i;
                position++;
            }
        }
        for(int i=position;i<length;i++){
            nums[i]=0;
        }
    }
};