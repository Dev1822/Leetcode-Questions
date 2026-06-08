class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map <int,int> hm={};
        int len=nums.size();
        for(int i=0;i<len;i++){
            if(hm.count(nums[i])){
                if(abs(hm[nums[i]]-i)<=k) return true;
            }
            hm[nums[i]]=i;
        }
        return false;
    }
};