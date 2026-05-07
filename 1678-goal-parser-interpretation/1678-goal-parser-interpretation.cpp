class Solution {
public:
    string interpret(string command) {
        int length=command.size();
        string res="";
        for(int i=0;i<length;i++){
            if(command[i]=='G'){
                res+='G';
            }
            else if(command[i]=='('){
                if(command[i+1]==')'){
                    res+='o';
                }
                else{
                    res+="al";
                }
            }
        }
        return res;
    }
};