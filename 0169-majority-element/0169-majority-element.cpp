class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> count={};
        int n=nums.size()/2;
        for(int i : nums){
            if(count[i]){
                count[i]=count[i]+1;
            }
            else{
                count[i]=1;
            }
            if(count[i]>n){
                return i;
            }
        }
        return 0;
    }
};