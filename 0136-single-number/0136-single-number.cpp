class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> obj;

        for (int i : nums) {
            obj[i] = obj[i] + 1;
        }

        for (auto& [key, value] : obj) {
            if (value == 1) {
                return key;
            }
        }

        return -1;
    }
};