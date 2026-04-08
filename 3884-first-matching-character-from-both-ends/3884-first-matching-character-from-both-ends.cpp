class Solution {
public:
    int firstMatchingIndex(string s) {
        int length=s.size();
        for(int i=0;i<length;i++){
            if(s[i]==s[length-i-1]){
                return i;
            }
        }
        return -1;
    }
};