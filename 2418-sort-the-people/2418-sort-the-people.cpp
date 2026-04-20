class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map <int,string> obj={};
        int length=names.size();
        for(int i=0;i<length;i++){
            obj[heights[i]]=names[i];
        }
        vector <string> res={};
        for(auto& [key,value] : obj){
            res.push_back(value);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};