class Solution {
public:
    string removeDuplicates(string s) {
        string res="";
        for(int i : s){
            if(res.size()==0){
                res.push_back(i);
            }
            else{
                if(res[res.size()-1]==i){
                    res.pop_back();
                }
                else{
                    res.push_back(i);
                }
            }
        }
        return res;
    }
};