class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int length=strs.size();
        bool found=true;
        vector <int> lens={};
        for(string i : strs){
            lens.push_back(i.size());
        }
        sort(lens.begin(),lens.end());
        int minlength=lens[0];
        for(int i=0;i<minlength;i++){
            string x=res+strs[0][i];
            for(string i : strs){
                if(i.find(x)!=0){
                    found=false;
                    break;
                }
            }
            if(found){
                res=x;
            }
            else{
                break;
            }
        }
        return res;
        
    }
};