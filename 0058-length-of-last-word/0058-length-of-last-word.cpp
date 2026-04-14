class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        while(i>=0 and s[i]==' '){
            i-=1;
        }
        int count=0;
        while(i>=0 and s[i]!=' '){
            count+=1;
            i-=1;
        }

        return count;
    }
};