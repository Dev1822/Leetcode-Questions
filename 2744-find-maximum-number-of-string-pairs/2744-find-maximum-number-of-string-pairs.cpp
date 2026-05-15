class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count=0;
        int length=words.size();
        for(int i=0;i<length;i++){
            string word=words[i];
            reverse(word.begin(),word.end());
            for(int j=i+1;j<length;j++){
                if(word==words[j]){
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};