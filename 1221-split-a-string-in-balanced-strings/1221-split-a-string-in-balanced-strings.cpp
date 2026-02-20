class Solution {
public:
    int balancedStringSplit(string s) {
        int length=size(s);
        int count=0;
        int L=0;
        int R=0;
        for(int i=0;i<length;i++){
            if(s[i]=='L'){
                L+=1;
            }
            if(s[i]=='R'){
                R+=1;
            }
            if(L==R){
                L=0;
                R=0;
                count+=1;
            }
        }

        return count;
    }
};