class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map <int,int> hm={};
        int len=nums.size();
        for(int i=0;i<len;i++){
            int x=nums[i];
            if(hm.count(x)){
                int abs=hm[x]-i;
                if(abs<0) abs=0-abs;
                if(abs<=k) return true;
            }
            hm[x]=i;
        }
        return false;
    }
};