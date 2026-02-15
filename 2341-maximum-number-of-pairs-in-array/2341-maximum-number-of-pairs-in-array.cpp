#include <set>
using namespace std;
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        set <int> res={};
        int count1=0;
        for(int i : nums){
            if(res.count(i)){
                res.erase(i);
                count1++;
            }
            else{
                res.insert(i);
            }
        }
        int count2=res.size();
        return {count1,count2};
    }
};