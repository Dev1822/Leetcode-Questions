class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int score1=0;
        int score2=0;
        int length=size(player1);
        for(int i=0;i<length;i++){
            if((i>0 && player1[i-1]==10) || (i>1 && player1[i-2]==10)){
                score1+=player1[i]*2;
            }
            else{
                score1+=player1[i];
            }

            if((i>0 && player2[i-1]==10) || (i>1 && player2[i-2]==10)){
                score2+=player2[i]*2;
            }
            else{
                score2+=player2[i];
            }
        }

        if(score1>score2) return 1;
        else if(score2>score1) return 2;
        return 0;

    }
};