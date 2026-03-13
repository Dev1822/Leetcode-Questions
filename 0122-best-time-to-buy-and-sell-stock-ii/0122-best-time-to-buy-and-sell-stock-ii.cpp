class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int length=prices.size();
        for(int i=1;i<length;i++){
            if(prices[i]>prices[i-1]){
                profit+=prices[i]-prices[i-1];
            }
        }

        return profit;
    }
};