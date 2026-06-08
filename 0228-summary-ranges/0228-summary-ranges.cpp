class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector <string> res={};
        int length=nums.size();
        for(int i=0;i<length;i++){
            string temp=to_string(nums[i]);
            int j=i;
            while(j<length-1 && nums[j+1]==nums[j]+1){
                j++;
            }
            if(j!=i){
                temp=temp+"->"+to_string(nums[j]);
            }
            res.push_back(temp);
            i=j;
        }
        return res;
    }
};