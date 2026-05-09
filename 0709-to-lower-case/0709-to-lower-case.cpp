class Solution {
public:
    string toLowerCase(string s) {
        string res="";
        for(char i : s){
            int ascii=i;
            if(65<=i && i<=90){
                i+=32;
            }
            char c=i;
            res+=c;
        }
        return res;
    }
};