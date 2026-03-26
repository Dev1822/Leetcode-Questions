class Solution {
public:
    string reverseWords(string s) {
        vector<string> words = {};
        string word = "";
        for (auto& i : s) {
            if (i == ' ') {
                words.push_back(word);
                word = "";
                continue;
            }
            word += i;
        }
        words.push_back(word);
        string res = "";
        string x = "";
        int len = words.size();
        for (int a = 0; a < len; a++){
            string i = words[a];
            int length = i.size() - 1;
            for (int j = length; j >= 0; j--) {
                x += i[j];
            }
            res += x;
            if (a != len - 1) res += " ";
            x = "";
        }
        return res;
    }
};