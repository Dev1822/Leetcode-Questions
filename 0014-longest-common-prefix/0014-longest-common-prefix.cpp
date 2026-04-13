class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int length=strs.size();
        vector <int> lens={};
        for(string i : strs){
            lens.push_back(i.size());
        }
        sort(lens.begin(),lens.end());
        int minlength=lens[0];
        string first=strs[0];
        for(int i=0;i<minlength;i++){
            char x=first[i];
            bool found=false;
            for(string j : strs){
                if(j[i]!=x){
                    found=true;
                    break;
                }
            }
            if(!found){
                res+=x;
            }
            else{
                break;
            }
        }
        return res;
    }
};