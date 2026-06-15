class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map <char,int> freq={};
        for(char i : s){
            freq[i]++;
        }
        for(auto& [key,value] : freq){
            if(value!=freq[s[0]]){
                return false;
            }
        }
        return true;
    }
};