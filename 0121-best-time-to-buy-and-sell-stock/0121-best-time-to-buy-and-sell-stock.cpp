class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int profit=0;
        for(int i : prices){
            if(i<min){
                min=i;
            }
            int temp=i-min;
            if(temp>profit){
                profit=temp;
            }
        }
        return profit;
    }
};