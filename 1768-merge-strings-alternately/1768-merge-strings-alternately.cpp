class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int len1=word1.size();
        int len2=word2.size();
        int maxLen=(len1>len2)?len1:len2;
        string res="";
        for(int i=0;i<maxLen;i++){
            if(i<len1){
                res+=word1[i];
            }
            if(i<len2){
                res+=word2[i];
            }
        }
        return res;
    }
};