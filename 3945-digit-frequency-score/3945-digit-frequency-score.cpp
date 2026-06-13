class Solution {
public:
    int digitFrequencyScore(int n) {
        int res=0;
        while(n>0){
            int b=n%10;
            res+=b;
            n=n/10;
        }
        return res;
    }
};