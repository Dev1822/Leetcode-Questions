#include <set>
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> s;
        for(int x : nums){
            s.insert(x);
        }
        int i = 1;
        while(true){
            if(!s.count(i)) return i;
            i++;
        }
    }
};