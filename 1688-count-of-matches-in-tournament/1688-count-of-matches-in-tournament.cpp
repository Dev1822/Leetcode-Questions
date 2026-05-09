class Solution {
public:
    int numberOfMatches(int n) {
        int res = 0;
        while(n>1){
            int x=n/2;
            res+=x;
            if(n%2==0){
                n=x;
            }
            else{
                n=x+1;
            }
        }
        return res;
    }
};