class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> st={};
        int j=0;
        int i=0;
        int res=0;
        while(j<s.size()){
            if(!st.count(s[j])){
                st.insert(s[j]);
                j++;
                res=max(res,j-i);
            }
            else{
                st.erase(s[i]);
                i++;
            }
        }
        return res;
    }
};