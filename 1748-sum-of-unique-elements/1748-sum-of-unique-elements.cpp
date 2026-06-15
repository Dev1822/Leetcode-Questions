class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> obj;

        for (int i : nums) {
            obj[i]++;
        }

        int count = 0;

        for (auto& [key,value] : obj) {

            if (value == 1) {
                count += key;
            }
        }

        return count;
    }
};