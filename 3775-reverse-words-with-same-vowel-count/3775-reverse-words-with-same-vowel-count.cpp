class Solution {
public:
    bool check(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    string reverseString(string x){
        string reversed="";
        int length=x.size()-1;
        for(int i=length;i>=0;i--){
            reversed+=x[i];
        }
        return reversed;
    }
    string reverseWords(string s) {
        string res="";
        int start=0;
        int vowels=0;
        int length=s.size();
        while(s[start]!=' ' && start<length){
            if(check(s[start])){
                vowels++;
            }
            res+=s[start];
            start++;
        }
        if(start==length){
            return s;
        }
        int count=0;
        string x="";
        for(int i=start+1;i<length;i++){
            if(check(s[i])){
                count++;
            }
            if(s[i]!=' '){
                x+=s[i];
            }
            if(s[i]==' ' || i==length-1){
                if(count==vowels){
                    x=reverseString(x);
                }
                count=0;
                res+=" ";
                res+=x;
                x="";
            }
        }

        return res;
    }
};