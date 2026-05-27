class Solution {
public:
    int vowelStrings(vector<string>& words, int left, int right) {
        set <char> vowels={'a','e','i','o','u'};
        int count=0;
        for(int i=left;i<=right;i++){
            string word=words[i];
            if(vowels.count(word[0]) && vowels.count(word[word.size()-1])){
                count++;
            }
        }
        return count;
    }
};