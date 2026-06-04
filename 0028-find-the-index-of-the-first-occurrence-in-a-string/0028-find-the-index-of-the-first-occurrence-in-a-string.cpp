class Solution {
public:
    int strStr(string haystack, string needle) {
        int hayLength=haystack.size();
        int needleLength=needle.size();
        int i=0;
        while(i<hayLength){
            if(haystack[i]==needle[0]){
                bool found=true;
                for(int j=i;j<i+needleLength;j++){
                    if(haystack[j]!=needle[j-i]){
                        found=false;
                        break;
                    }
                }
                if(found){
                    return i;
                }
                else{
                    i++;
                }
            }
            else{
                i++;
            }
        }
        return -1;
    }
};