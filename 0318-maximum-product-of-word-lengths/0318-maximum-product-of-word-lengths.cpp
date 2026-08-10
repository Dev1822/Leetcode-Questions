class Solution {
public:
    int maxProduct(vector<string>& words) {
        int ans = 0;

        for (int i = 0; i < words.size(); i++) {
            unordered_set<char> check(words[i].begin(), words[i].end());

            for (int j = i + 1; j < words.size(); j++) {

                bool found = false;

                for (char c : words[j]) {
                    if (check.count(c)) {
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    ans = max(ans, 
                        (int)(words[i].size() * words[j].size()));
                }
            }
        }

        return ans;
    }
};