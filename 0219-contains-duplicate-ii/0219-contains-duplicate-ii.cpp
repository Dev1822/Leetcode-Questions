class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map <int,int> hm{};
        int length=nums.size();
        for(int i=0;i<length;i++){
            if(hm.count(nums[i])){
                if(abs(hm[nums[i]]-i)<=k){
                    return true;
                }
            }
            hm[nums[i]]=i;
        }
        return false;
    }
};