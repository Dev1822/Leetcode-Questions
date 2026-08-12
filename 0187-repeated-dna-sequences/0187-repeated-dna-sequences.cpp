class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        if (s.size() < 10) return {};
        unordered_multiset <string> dnaSet={};
        unordered_multiset <string> repeated={};
        string dna="";
        for(int i=0;i<10;i++){
            dna+=s[i];
        }
        dnaSet.insert(dna);
        vector <string> res={};
        for(int i=10;i<s.size();i++){
            dna.erase(0,1);
            dna+=s[i];
            if (dnaSet.count(dna)) {
                if (!repeated.count(dna)) {
                    res.push_back(dna);
                    repeated.insert(dna);
                }
            } 
            else {
                dnaSet.insert(dna);
            }
        }
        return res;
    }
};