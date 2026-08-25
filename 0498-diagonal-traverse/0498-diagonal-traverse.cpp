class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        vector <int> res={};
        map <int,vector<int>> indexSum={};
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                indexSum[i+j].push_back(mat[i][j]);
            }
        }
        for(auto& [key,value] : indexSum){
            if(key%2==0) reverse(value.begin(),value.end());
            for(int i=0;i<value.size();i++){
                res.push_back(value[i]);
            }
        }
        return res;
    }
};