class Solution {
public:
    int scoreOfString(string s) {
        int length=s.size()-1;
        int score=0;
        for(int i=0;i<length;i++){
            int x=s[i]-s[i+1];
            if(x<0){
                x=-x;
            }
            score+=x;
        }
        return score;
    }
};