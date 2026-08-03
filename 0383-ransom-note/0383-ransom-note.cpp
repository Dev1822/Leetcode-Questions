class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map <char,int> magazineMap={};
        for(char i : magazine){
            magazineMap[i]++;
        }
        for(char i : ransomNote){
            if(magazineMap[i]>0){
                magazineMap[i]--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};