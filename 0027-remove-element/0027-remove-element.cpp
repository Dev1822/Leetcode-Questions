class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int length=nums.size();
        int index=0;
        for(int i : nums){
            if(i!=val){
                count++;
                nums[index]=i;
                index++;
            }
        }
        return count;
    }
};