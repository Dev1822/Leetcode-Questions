class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        set <int> check={};
        for(int i=1;i<=k;i++){
            check.insert(i);
        }
        int index=nums.size()-1;
        while(check.size()!=0){
            check.erase(nums[index]);
            index--;
        }
        return nums.size()-index-1;
    }
};