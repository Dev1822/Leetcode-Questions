class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector <string> res={};
        int last=target[target.size()-1];
        int index=0;
        for(int i=1;i<=last;i++){
            if(i==target[index]){
                res.push_back("Push");
                index++;
            }
            else{
                res.push_back("Push");
                res.push_back("Pop");
            }
        }
        return res;
    }
};