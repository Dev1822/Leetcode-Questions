class Solution {
public:
    bool isValid(string s) {
        unordered_map <char,char> brackets={{'(',')'},{'{','}'},{'[',']'}};
        vector <char> arr={};
        for(char i : s){
            if(brackets[i]){
                arr.push_back(i);
            }
            else{
                int length=arr.size();
                if(length==0){
                    return false;
                }
                if(i==brackets[arr[length-1]]){
                    arr.pop_back();
                }
                else{
                    return false;
                }
            }
        }
        return arr.size()==0;
    }
};