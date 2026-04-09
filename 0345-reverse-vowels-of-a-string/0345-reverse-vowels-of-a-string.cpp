class Solution {
public:
    string reverseVowels(string s) {
        set <char> isVowel={'a','e','i','o','u','A','E','I','O','U'};
        int i=0;
        int j=s.size()-1;
        while(i<j){
            while(i<j && !isVowel.contains(s[i])){
                i++;
            }
            while(i<j && !isVowel.contains(s[j])){
                j--;
            }
            swap(s[i],s[j]);
            i++;
            j--;
        }
        return s;
    }
};