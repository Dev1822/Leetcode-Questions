class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set <int> asciiCount={};
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
            if(asciiCount.count(check)){
                if(!asciiCount.count(ascii)){
                    count++;
                }
            }
            asciiCount.insert(i);
        }
        return count;
    }
};