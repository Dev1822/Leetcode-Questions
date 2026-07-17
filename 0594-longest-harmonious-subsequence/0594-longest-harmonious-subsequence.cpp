class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;
        }

        int maxLength = 0;

        for (auto &[key, value] : freq) {
            if (freq.count(key + 1)) {
                maxLength = max(maxLength, value + freq[key + 1]);
            }
        }

        return maxLength;
    }
};