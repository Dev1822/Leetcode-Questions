class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int>freq={};
        int j=0;
        int maxLength=0;
        for(int i=0;i<s.size();i++){
            while(j<s.size() && freq[s[j]]<2){
                freq[s[j]]++;
                j++;
            }
            maxLength=max(maxLength,j-i);
            freq[s[i]]--;
        }
        return maxLength;
    }
};