class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        for(int i=0;i<rows;i++){
            for(int j=i+1;j<columns;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(auto& i : matrix){
            reverse(i.begin(),i.end());
        }
    }
};