class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(char i : s){
            int ascii=i;
            if((48<=ascii && ascii<=57) || (65<=ascii && ascii<=90) || (97<=ascii && ascii<=122)){
                if(65<=ascii && ascii<=90){
                    ascii=ascii+32;
                }
                char c=ascii;
                res+=c;
            }
            else{
                continue;
            }
        }
        string reversed=res;
        reverse(reversed.begin(),reversed.end());
        return res==reversed;
    }
};