class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int length=words.size();
        int res=0;
        for(int i=0;i<length;i++){
            string word=words[i];
            reverse(word.begin(),word.end());
            for(int j=i+1;j<length;j++){
                if(words[j]==word){
                    res++;
                    break;
                }
            }
        }
        return res;
    }
};