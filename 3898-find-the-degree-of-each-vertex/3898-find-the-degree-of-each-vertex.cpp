class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        vector <int> res={};
        for(auto& i : matrix){
            int count=0;
            for(int j : i){
                if(j==1){
                    count++;
                }
            }
            res.push_back(count);
        }
        return res;
    }
};