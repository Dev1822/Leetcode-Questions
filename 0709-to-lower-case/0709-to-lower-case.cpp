class Solution {
public:
    string toLowerCase(string s) {
        string res="";
        for(char i : s){
            int ascii=i;
            if(65<=ascii && ascii<=90){
                ascii+=32;
            }
            char c=ascii;
            res+=c;
        }
        return res;
    }
};