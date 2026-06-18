class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string& word : words){
            int i=0;
            int j=word.size()-1;
            bool palindrome=true;
            while(i<j && palindrome){
                if(word[i]!=word[j]){
                    palindrome=false;
                }
                i++;
                j--;
            }
            if(palindrome){
                return word;
            }
        }
        return "";
    }
};