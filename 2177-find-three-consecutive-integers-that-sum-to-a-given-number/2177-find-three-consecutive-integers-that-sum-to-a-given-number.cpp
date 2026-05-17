class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        long long i=num/3;
        long long sum=(i-1)+i+(i+1);
        if(sum==num){
            return {i-1,i,i+1};
        }
        else{
            return {};
        }
    }
};