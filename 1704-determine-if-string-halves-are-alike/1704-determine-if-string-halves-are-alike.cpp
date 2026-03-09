class Solution {
public:
    bool halvesAreAlike(string s) {
        string first="";
        string second="";
        int length=size(s);
        int half=length/2;
        for(int i=0;i<length;i++){
            if(i<half){
                first+=s[i];
            }
            else{
                second+=s[i];
            }
        }
        int firstCount=0;
        int secondCount=0;
        set<char> vowels={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        for(int i=0;i<half;i++){
            if(vowels.count(first[i])==1){
                firstCount++;
            }
            if(vowels.count(second[i])==1){
                secondCount++;
            }
        }

        return firstCount==secondCount;
    }
};