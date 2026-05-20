class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> obj = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };
        int length=s.size();
        int num=0;
        for(int i=0;i<length;i++){
            if(i<length-1 && obj[s[i]]<obj[s[i+1]]){
                num-=obj[s[i]];
            }
            else{
                num+=obj[s[i]];
            }
        }
        return num;
    }
};