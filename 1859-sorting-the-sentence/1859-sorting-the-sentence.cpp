class Solution {
public:
    string sortSentence(string s) {
        int length=s.size();
        int i=0;
        int spaces=0;
        while(i<length){
            if(s[i]==' '){
                spaces++;
            }
            i++;
        }
        i=0;
        vector <string> sentence(spaces+1,"");
        while(i<length){
            string word="";
            while(i<length && !isdigit(s[i])){
                word+=s[i];
                i++;
            }
            int position=s[i] - '0';
            sentence[position-1]=word;
            i++;
            if(i<length && s[i]==' '){
                i++;
            }
        }
        string res="";
        int spacesAdded=0;
        for(string i : sentence){
            res+=i;
            if(spacesAdded<spaces){
                res+=" ";
                spacesAdded++;
            }
        }
        return res;
    }
};