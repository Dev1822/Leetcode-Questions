class Solution {
public:
    string reverseVowels(string s) {
        set <int> isVowel={'a','e','i','o','u','A','E','I','O','U'};
        vector <char> vowels={};
        for(char i : s){
            if(isVowel.count(i)==1){
                vowels.push_back(i);
            }
        }
        int vowlen=vowels.size();
        vector <char> reversed={};
        for (int i=vowlen-1;i>=0;i--) {
            reversed.push_back(vowels[i]);
        }
        int index = 0;
        string result = "";
        for (int i : s) {
            if (isVowel.count(i)==1) {
                result += reversed[index];
                index++;
            } 
            else {
                result += i;
            }
        }

        return result;
    }
};