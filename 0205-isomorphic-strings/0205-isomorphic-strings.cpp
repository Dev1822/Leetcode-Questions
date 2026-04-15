class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map <char,char> compare1={};
        unordered_map <char,char> compare2={};
        int length=s.size();
        for(int i=0;i<length;i++){
            if(compare1.contains(s[i]) || compare2.contains(t[i])){
                if(compare1[s[i]]!=t[i] || compare2[t[i]]!=s[i]){
                    return false;
                }
            }
            else{
                compare1[s[i]]=t[i];
                compare2[t[i]]=s[i];
            }
        }
        return true;
    }
};