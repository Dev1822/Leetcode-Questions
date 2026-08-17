class Solution {
public:
    int myAtoi(string s) {
        long long int res=0;
        int i=0;
        while(i<s.size() && s[i]==' '){
            i++;
        }
        bool negative=false;
        if(i<s.size() && (s[i]=='-' || s[i]=='+')){
            if(s[i]=='-'){
                negative=true;
            }
            i++;
        }
        int c=s[i];
        while(i<s.size() && ((48<=c && c<=57))){
            if(s[i]==' '){
                i++;
                c=s[i];
                continue;
            }
            res=(res*10)+(c-'0');
            if (!negative && res > INT_MAX) {
                return INT_MAX;
            }
            if (negative && -res < INT_MIN) {
                return INT_MIN;
            }
            i++;
            c=s[i];
        }
        if(negative){
            res=0-res;
        }
        return res;
    }
};