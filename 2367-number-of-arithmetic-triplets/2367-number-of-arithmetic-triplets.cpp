class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        set <int> s(nums.begin(),nums.end());
        int length=size(s);
        int count=0;
        for(int i=0;i<length;i++){
            int j=diff+nums[i];
            if(s.count(j)==1){
                int k=diff+j;
                if(s.count(k)==1){
                    count++;
                }
            }
            else{
                continue;
            }
        }
        return count;
    }
};