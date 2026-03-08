class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> obj;

        for (int i : nums) {
            if (obj.count(i)) {
                obj[i] = obj[i] + 1;
            } else {
                obj[i] = 1;
            }
        }

        int count = 0;

        for (auto& pair : obj) {
            int key = pair.first;
            int value = pair.second;

            if (value == 1) {
                count += key;
            }
        }

        return count;
    }
};