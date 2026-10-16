class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set <char> st={};
        int j=0;
        int res=0;
        for(int i=0;i<s.size();i++){
            while(j<s.size() && !st.count(s[j])){
                st.insert(s[j]);
                j++;
            }
            res=max(res,j-i);
            st.erase(s[i]);
        }
        return res;
    }
};