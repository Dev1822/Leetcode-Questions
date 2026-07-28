class Solution {
public:
    bool checkIfPangram(string sentence) {
        set <char> sentenceSet={};
        for(char i : sentence){
            sentenceSet.insert(i);
        }
        return sentenceSet.size()==26;
    }
};