class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set <int> asciiSet={};
        int count=0;
        for(char i : word){
            int ascii=i;
            int check;
            if(65<=ascii && ascii<=90){
                check=ascii+32;
            }
            else{
                check=ascii-32;
            }
            if(asciiSet.count(check)){
                if(!(asciiSet.count(ascii))){
                    count++;
                }
            }
            asciiSet.insert(i);
        }
        return count;
    }
};