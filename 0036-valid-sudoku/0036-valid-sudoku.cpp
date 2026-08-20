class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<char>> grids={};
        vector<char> grid={};
        for(int i=0;i<9;i++){
            grids.push_back(grid);
        }
        int subtract=0;
        int count=0;
        for(auto& i : board){
            unordered_map <char,int> freq={};
            for(char j : i){
                if(j!='.'){
                    freq[j]++;
                    if(freq[j]>1){
                        return false;
                    }
                    cout<<(count/3)-subtract<<endl;
                    grids[(count/3)-subtract].push_back(j);
                }
                count++;
            }
            if(count!=27 && count!=54){
                subtract+=3;
            }
        }
        int index=0;
        while(index<9){
            unordered_map <char,int> freq={};
            for(auto& i : board){
                if(i[index]!='.'){
                    freq[i[index]]++;
                    if(freq[i[index]]>1){
                        return false;
                    }
                }
            }
            index++;
        }
        for(auto& i : grids){
            unordered_map <char,int> freq={};
            for(char j : i){
                if(j!='.'){
                    freq[j]++;
                    if(freq[j]>1){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};