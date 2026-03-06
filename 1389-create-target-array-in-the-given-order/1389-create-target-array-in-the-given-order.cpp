class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int length=size(nums);
        vector <int> v={};
        for(int i=0;i<length;i++){
            v.insert(v.begin()+index[i],nums[i]);
        }
        return v;
    }
};