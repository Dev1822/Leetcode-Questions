class Solution {
public:
    bool check(char c){
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
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
        for(int i=start+1;i<length;i++){
            int count=0;
            string x="";
            while(s[i]!=' ' && i<length){
                if(check(s[i])){
                    count++;
                }
                x+=s[i];
                i++;
            }
            if(count==vowels){
                reverse(x.begin(),x.end());
            }
            res+=" ";
            res+=x;
        }

        return res;
    }
};