class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string str="";
        for(string& i : words){
            str+=i[0];
        }
        return str==s;
    }
};