class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> res={};
        int count=0;
        int rowCount=matrix.size();
        int colCount=matrix[0].size();
        int rowStart=0;
        int colStart=0;
        int rowEnd=rowCount-1;
        int colEnd=colCount-1;
        int row=0;
        int column=0;
        int total=rowCount*colCount;
        bool rowOperation=false;
        bool increment=true;
        while(count<total){
            res.push_back(matrix[row][column]);
            count++;
            if(count==total){
                break;
            }
            if(rowOperation){
                if(increment) row++;
                else row--;
            }
            else{
                if(increment) column++;
                else column--;
            }
            if(column>colEnd){
                column--;
                row++;
                rowOperation=true;
                increment=true;
                rowStart++;
            }
            else if(row>rowEnd) {
                row--;
                column--;
                rowOperation = false;
                increment = false;
                colEnd--;
            }
            else if(column<colStart){
                column++;
                row--;
                rowOperation = true;
                increment = false;
                rowEnd--;
            }
            else if (row < rowStart) {
                row++;
                column++;
                rowOperation = false;
                increment = true;
                colStart++;
            }
        }
        return res;
    }
};