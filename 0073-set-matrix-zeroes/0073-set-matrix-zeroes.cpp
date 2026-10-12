class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_set <int> zeroIndex={};
        for(int i=0;i<matrix.size();i++){
            vector <int> row=matrix[i];
            bool zeroFound=false;
            for(int j=0;j<row.size();j++){
                if(row[j]==0){
                    zeroFound=true;
                    zeroIndex.insert(j);
                }
            }
            if(zeroFound){
                vector <int> zeroVector(row.size(),0);
                matrix[i]=zeroVector;
            }
        }
        for(int i : zeroIndex){
            for(int k=0;k<matrix.size();k++){
                matrix[k][i]=0;
            }
        }
    }
};