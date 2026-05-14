class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        for(auto& i : sentences){
            int count=0;
            for(char j : i){
                if(j==' '){
                    count++;
                }
            }
            if(count>max){
                max=count;
            }
        }
        return max+1;
    }
};