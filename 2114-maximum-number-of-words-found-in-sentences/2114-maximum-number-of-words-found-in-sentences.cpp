class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        for(auto& i : sentences){
            int spaces=0;
            for(char j : i){
                if(j==' '){
                    spaces++;
                }
            }
            if(spaces>max){
                max=spaces;
            }
        }
        return max+1;
    }
};