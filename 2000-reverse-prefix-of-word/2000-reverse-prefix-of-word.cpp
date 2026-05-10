class Solution {
public:
    string reversePrefix(string word, char ch) {
        string first="";
        string second="";
        bool found=false;
        for(char i : word){
            if(found){
                second+=i;
            }
            else{
                first+=i;
            }
            if(i==ch){
                found=true;
            }
        }

        if(!found){
            return word;
        }

        int length=first.size()-1;
        string reversed="";
        
        for(int i=length;i>=0;i--){
            reversed+=first[i];
        }

        return reversed+second;
    }
};