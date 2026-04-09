class Solution {
public:
    string reverseWords(string s) {
        list <string> arr={};
        int length=s.size();
        string x="";
        int start=0;
        while(s[start]==' '){
            start++;
        }
        while(s[length-1]==' '){
            length--;
        }
        for(int i=start;i<length;i++){
            if(s[i]==' '){
                if(i==length-1 || s[i+1]!=' '){
                    arr.push_front(x);
                    arr.push_front(" ");
                    x="";
                }
            }
            else{
                x+=s[i];
            }
        }
        arr.push_front(x);
        string res="";
        for(string i : arr){
            res+=i;
        }
        return res;
    }
};