class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int length=nums.size();
        vector <int> res(length*2,0);
        for(int i=0;i<length;i++){
            res[i]=nums[i];
            res[(2*length)-1-i]=nums[i];
        }
        return res;
    }
};