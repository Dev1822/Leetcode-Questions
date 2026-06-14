class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map <char,int> vowelCount;
        unordered_map <char,int> consonantCount;
        int maxVowel=0;
        int maxConsonant=0;
        for(char ch : s){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowelCount[ch]++;
                if(vowelCount[ch]>maxVowel){
                    maxVowel=vowelCount[ch];
                }
            }
            else{
                consonantCount[ch]++;
                if(consonantCount[ch]>maxConsonant){
                    maxConsonant=consonantCount[ch];
                }
            }
        }
        return maxVowel+maxConsonant;
    }
};