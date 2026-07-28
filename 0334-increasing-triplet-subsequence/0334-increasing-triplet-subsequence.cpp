class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int max=INT_MAX;
        int second=INT_MAX;
        for(int i : nums){
            if(max>=i){
                max=i;
            }
            else if(second>=i){
                second=i;
            }
            else{
                return true;
            }
        }
        return false;
    }
};