class Solution {
public:
    bool check(char c){
        return 'a'<=c && c<='z';
    }
    string reverseByType(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(check(s[i]) && check(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(!check(s[i])){
                i++;
            }
            else if(!check(s[j])){
                j--;
            }
        }
        i=0;
        j=s.size()-1;
        while(i<j){
            if(!check(s[i]) && !check(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(check(s[i])){
                i++;
            }
            else if(check(s[j])){
                j--;
            }
        }
        return s;
    }
};