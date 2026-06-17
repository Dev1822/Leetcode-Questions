class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0;
        int r=0;
        int count=0;
        for(char i : s){
            if(i=='L'){
                l+=1;
            }
            else{
                r+=1;
            }
            if(l==r){
                count+=1;
                l=0;
                r=0;
            }
        }
        return count;
    }
};