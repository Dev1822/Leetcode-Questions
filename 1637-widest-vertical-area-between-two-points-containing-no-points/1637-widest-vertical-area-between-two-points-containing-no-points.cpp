class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector <int> x={};
        for(auto& i : points){
            x.push_back(i[0]);
        }
        sort(x.begin(),x.end());
        int maxWidth=0;
        for(int i=0;i<x.size()-1;i++){
            maxWidth=max(maxWidth,x[i+1]-x[i]);
        }
        return maxWidth;
    }
};