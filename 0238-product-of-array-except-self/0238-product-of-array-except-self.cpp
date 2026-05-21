class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> answer={};
        int product=1;
        int zeroes=0;
        for(int i : nums){
            if(i==0){
                zeroes++;
                continue;
            }
            product*=i;
        }
        for(int i : nums){
            if(i==0){
                if(zeroes>1){
                    answer.push_back(0);
                }
                else{
                    answer.push_back(product);
                }
            }
            else{
                if(zeroes>0){
                    answer.push_back(0);
                }
                else{
                    answer.push_back(product/i);
                }
            }
        }
        return answer;
    }
};