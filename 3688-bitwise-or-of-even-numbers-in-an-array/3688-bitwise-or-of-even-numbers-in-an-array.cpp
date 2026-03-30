class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int res=0;
        for(int i : nums){
            if(i%2==0){
                res=res | i;
            }
        }
        return res;
    }
};