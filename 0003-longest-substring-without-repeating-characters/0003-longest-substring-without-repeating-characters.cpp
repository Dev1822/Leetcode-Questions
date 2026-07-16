class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength=0;
        int i=0;
        int j=0;
        while(i<s.size()){
            unordered_set <char> subString={};
            while(j<s.size() && !subString.count(s[j])){
                subString.insert(s[j]);
                j++;
            }
            maxLength=max(maxLength,j-i);
            i++;
            j=i;
        }
        return maxLength;
    }
};