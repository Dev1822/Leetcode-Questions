class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
        multiset <int> numsSet(nums.begin(),nums.end());
        for(int i : nums){
            if(numsSet.count(i)>2){
                return false;
            }
        }
        return true;
    }
};