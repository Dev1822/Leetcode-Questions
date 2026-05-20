class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set <int> numsSet(nums.begin(),nums.end());
        return !(nums.size()==numsSet.size());
    }
};