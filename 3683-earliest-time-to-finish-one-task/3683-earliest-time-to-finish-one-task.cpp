class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int minTime=INT_MAX;
        for(auto& i : tasks){
            minTime=min(minTime,i[0]+i[1]);
        }
        return minTime;
    }
};