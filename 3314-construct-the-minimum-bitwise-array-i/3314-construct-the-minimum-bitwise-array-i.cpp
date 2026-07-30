class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;

        for (int num : nums) {
            if (num == 2) {
                ans.push_back(-1);
                continue;
            }

            int bit = 1;
            while (num & bit)
                bit <<= 1;

            ans.push_back(num - (bit >> 1));
        }

        return ans;
    }
};