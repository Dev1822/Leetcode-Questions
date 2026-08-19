class Solution {
public:
    int smallestNumber(int n) {
        while(true){
            bool zero=false;
            int power=0;
            int temp=n;
            while(temp>0){
                if((pow(2,power))<=temp){
                    temp-=pow(2,power);
                    power++;
                }
                else{
                    zero=true;
                    break;
                }
            }
            if(zero){
                n++;
                continue;
            }
            else{
                break;
            }
        }
        return n;
    }
};