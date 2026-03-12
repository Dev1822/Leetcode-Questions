class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int len1 = grid.size();
        int len2 = grid[0].size();
        vector<int> onesRow(len1,0);
        vector<int> zeroesRow(len1,0);
        vector<int> onesCol(len2,0);
        vector<int> zeroesCol(len2,0);
        vector<vector<int>> diff(len1,vector<int>(len2, 0));
        for(int i=0;i<len1;i++){
            for(int j=0;j<len2;j++){
                if(grid[i][j]==0){
                    zeroesRow[i]++;
                    zeroesCol[j]++;
                }
                else{
                    onesRow[i]++;
                    onesCol[j]++;
                }
            }
        }
        for(int i=0;i<len1;i++){
            for(int j=0;j<len2;j++){
                diff[i][j]=onesRow[i]+onesCol[j]-zeroesRow[i]-zeroesCol[j];
            }
        }

        return diff;

    }
};