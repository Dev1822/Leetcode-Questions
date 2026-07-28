class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element=0;
        int digit=0;
        for(int i : nums){
            element+=i;
            while(i>0){
                digit+=i%10;
                i=i/10;
            }
        }
        return abs(element-digit);
    }
};