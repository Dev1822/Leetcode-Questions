#include <set>
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set <int> s={};
        int length=size(nums);
        for(int i : nums){
            if(s.find(i)==s.end()) s.insert(i);
            else return i;
        }
        return -1;
    }
};