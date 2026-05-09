class Solution {
public:
    int maximum69Number (int num) {
        string numString=to_string(num);
        string res="";
        bool found=false;
        for(char i : numString){
            if(!found && i=='6'){
                res+='9';
                found=true;
            }
            else{
                res+=i;
            }
        }
        return stoi(res);
    }
};