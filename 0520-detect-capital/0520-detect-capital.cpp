class Solution {
public:
    bool detectCapitalUse(string word) {
        int length=size(word);
        int upper=0;
        int lower=0;
        bool islower=false;
        for(int i=0;i<length;i++){
            int x=word[i];
            if(65<=x && x<=90){
                if(!islower){
                    upper++;
                }
                else{
                    return false;
                }
            }
            else{
                lower++;
                islower=true;
            }
        }
        return (upper==length || lower==length ||(lower==(length-1)));
    }
};