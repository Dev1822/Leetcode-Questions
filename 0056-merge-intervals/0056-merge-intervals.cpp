class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int start=intervals[0][0];
        int end=intervals[0][1];
        int lastAddedIndex=-1;
        vector<vector<int>> res={};
        for(int i=0;i<intervals.size()-1;i++){
            if(end>=intervals[i+1][0]){
                end=max(end,intervals[i+1][1]);
            }
            else if(end<intervals[i+1][0]){
                vector<int> interval={};
                interval.push_back(start);
                interval.push_back(end);
                res.push_back(interval);
                start=intervals[i+1][0];
                end=intervals[i+1][1];
                lastAddedIndex=i;
            }
        }
        if(lastAddedIndex!=intervals.size()-1){
            vector<int> interval={};
            interval.push_back(start);
            interval.push_back(end);
            res.push_back(interval);
        }
        return res;
    }
};