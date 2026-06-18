class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int res=0;
        string str="";
        text+=" ";
        for(char i : text){
            if(i==' '){
                bool canBeTyped=true;
                for(char j : brokenLetters){
                    if(find(str.begin(),str.end(),j)!=str.end()){
                        canBeTyped=false;
                        break;
                    }
                }
                if(canBeTyped){
                    res+=1;
                }
                str="";
            }
            else{
                str+=i;
            }
        }
        return res;
    }
};