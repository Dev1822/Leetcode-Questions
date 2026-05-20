class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        for(auto& i : accounts){
            int count=0;
            for(int j : i){
                count+=j;
            }
            if(count>max){
                max=count;
            }
        }
        return max;
    }
};