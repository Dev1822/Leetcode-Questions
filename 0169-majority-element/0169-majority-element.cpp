class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> count={};
        int lim=nums.size()/2;
        for(int i : nums){
            if(count[i]){
                count[i]++;
            }
            else{
                count[i]=1;
            }
            if(count[i]>lim){
                return i;
            }
        }
        return 0;
    }
};