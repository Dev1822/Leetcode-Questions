class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector <string> res={};
        int index=0;
        int last=target[target.size()-1];
        for(int i=1;i<=last;i++){
            if(target[index]==i){
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