#include <unordered_set>
using namespace std;

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_set<int> s;

        for (int n : nums) {
            if (s.count(n))
                s.erase(n);
            else
                s.insert(n);
        }

        return s.empty();
    }
};
