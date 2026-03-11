class Solution {
public:
    string replaceDigits(string s) {
        int length = s.size();
        for(int i = 1; i < length; i += 2){
            int shift = s[i] - '0';   
            s[i] = s[i-1] + shift;
        }
        return s;
    }
};