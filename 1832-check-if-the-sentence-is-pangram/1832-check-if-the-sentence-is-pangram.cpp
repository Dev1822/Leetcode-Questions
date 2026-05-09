class Solution {
public:
    bool checkIfPangram(string sentence) {
        set <char> sentenceSet(sentence.begin(),sentence.end());
        return sentenceSet.size()==26;
    }
};