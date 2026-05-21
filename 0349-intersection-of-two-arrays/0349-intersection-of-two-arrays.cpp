class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> nums1Set(nums1.begin(),nums1.end());
        unordered_set <int> nums2Set(nums2.begin(),nums2.end());
        vector <int> res={};
        for(int i : nums1Set){
            if(nums2Set.count(i)){
                res.push_back(i);
            }
        }
        return res;
    }
};