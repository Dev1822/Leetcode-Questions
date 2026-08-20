class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int start=INT_MAX;
        int end=INT_MIN;
        for(int i : nums){
            if(i<start){
                start=i;
            }
            if(i>end){
                end=i;
            }
        }
        vector <int> res={};
        for(int i=start;i<=end;i++){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};