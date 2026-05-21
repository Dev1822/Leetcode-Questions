class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> res={};
        for(int i : nums1){
            if(find(nums2.begin(),nums2.end(),i)!=nums2.end() && find(res.begin(),res.end(),i)==res.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};