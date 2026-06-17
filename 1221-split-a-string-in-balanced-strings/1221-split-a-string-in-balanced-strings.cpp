class Solution {
public:
    int balancedStringSplit(string s) {
        int L=0;
        int R=0;
        int count=0;
        for(char i : s){
            if(i=='L'){
                L+=1;
            }
            else{
                R+=1;
            }
            if(L==R){
                count+=1;
                L=0;
                R=0;
            }
        }
        return count;
    }
};