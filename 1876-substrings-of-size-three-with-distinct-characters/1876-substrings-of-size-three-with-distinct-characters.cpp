class Solution {
public:
    int countGoodSubstrings(string s) {
        int count = 0;
        unordered_map<char, int> freq;

        for (int i = 0; i < s.size(); i++) {
            freq[s[i]]++;
            if (i >= 3) {
                freq[s[i - 3]]--;
                if (freq[s[i - 3]] == 0) {
                    freq.erase(s[i - 3]);
                }
            }
            if (i >= 2 && freq.size() == 3) {
                count++;
            }
        }

        return count;
    }
};