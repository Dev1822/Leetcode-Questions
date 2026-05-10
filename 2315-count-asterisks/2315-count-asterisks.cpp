class Solution {
public:
    int countAsterisks(string s) {
        int bars=0;
        int asterisks=0;
        for(char i : s){
            if(i=='|'){
                bars++;
            }
            if(bars%2==0){
                if(i=='*'){
                    asterisks++;
                }
            }
        }
        return asterisks;
    }
};