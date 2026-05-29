class Solution {
public:
    int minElement(vector<int>& nums) {
        int min=nums[0];
        for(int i : nums){
            int sum=0;
            while(i>0){
                sum+=i%10;
                i=i/10;
            }
            if(sum<min){
                min=sum;
            }
        }
        return min;
    }
};