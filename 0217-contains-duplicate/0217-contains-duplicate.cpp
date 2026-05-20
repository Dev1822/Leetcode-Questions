class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> numsSet={};
        for(int i : nums){
            if(numsSet.contains(i)){
                return true;
            }
            else{
                numsSet.insert(i);
            }
        }
        return false;
    }
};