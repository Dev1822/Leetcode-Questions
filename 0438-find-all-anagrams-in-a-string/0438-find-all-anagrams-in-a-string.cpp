class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        unordered_map<char, int> pMap;

        if(p.size()>s.size()){
            return ans;
        }
        
        for (char c : p) {
            pMap[c]++;
        }
        int k = p.size();
        for (int i = 0; i <= s.size() - k; i++) {
            unordered_map<char, int> m;
            for (int j = i; j < i + k; j++) {
                m[s[j]]++;
            }
            if (m == pMap) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};