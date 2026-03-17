class Solution {
public:

    int minimum(vector<int>& nums){
        int min=nums[0];
        int index=0;
        int length=nums.size();
        for(int i=0;i<length;i++){
            if(nums[i]<min){
                min=nums[i];
                index=i;
            }
        }
        nums.erase(nums.begin()+index);
        return min;
    } 

    vector<int> numberGame(vector<int>& nums) {
        vector<int> arr={};
        int length=nums.size();
        while(length>0){
            int alice=minimum(nums);
            int bob=minimum(nums);
            arr.push_back(bob);
            arr.push_back(alice);
            length=nums.size();
        }
        return arr;
    }
};