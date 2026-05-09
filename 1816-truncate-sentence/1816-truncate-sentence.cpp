class Solution {
public:
    string truncateSentence(string s, int k) {
        int spaces=0;
        string res="";
        int i=0;
        int length=s.size();
        while(i<length){
            if(s[i]==' '){
                spaces++;
                if(spaces==k){
                    return res;
                }
            }
            res+=s[i];
            i++;
        }
        return res;
    }
};