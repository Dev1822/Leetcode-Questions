class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string res="";
        for(string& i : words){
            int weight=0;
            for(char j : i){
                weight+=weights[j-'a'];
            }
            int modulo=weight%26;
            char c='z'-modulo;
            res+=c;
        }
        return res;
    }
};