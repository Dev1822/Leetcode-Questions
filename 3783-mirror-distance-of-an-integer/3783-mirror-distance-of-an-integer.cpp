class Solution {
public:
    int mirrorDistance(int n) {
        int temp=n;
        int reverse=0;
        while(temp>0){
            reverse=(reverse*10)+temp%10;
            temp=temp/10;
        }
        int res=n-reverse;
        if(res<0){
            res=0-res;
        }
        return res;
    }
};