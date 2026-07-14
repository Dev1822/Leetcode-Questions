class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low = 0;
        int high = 0;
        int max_length = INT_MIN;
        int cZero = 0;

        while(high < nums.size()){
            if(nums[high]==0){
                cZero++;
            }
            
            while(cZero > k){
                if(nums[low]==0){
                    cZero--;
                }
                low++;
            }

            max_length = max(max_length , high - low + 1);
            high++;
        }
        return max_length;
    }
};