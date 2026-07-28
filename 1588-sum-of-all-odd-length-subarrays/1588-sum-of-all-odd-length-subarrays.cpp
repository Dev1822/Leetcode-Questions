class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        int odd=arr.size();
        while(odd>=1){
            int tempSum=0;
            for(int i=0;i<odd;i++){
                tempSum+=arr[i];
            }
            sum+=tempSum;
            for(int i=odd;i<arr.size();i++){
                tempSum-=arr[i-odd];
                tempSum+=arr[i];
                sum+=tempSum;
            }
            odd-=2;
        } 
        return sum;
    }
};