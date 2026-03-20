class Solution {
public:
    int maxDistinct(string s) {
        set <int> se={};
        int count=0;
        int length=s.size();
        for(int i=0;i<length;i++){
            if(se.count(s[i])==0){
                count++;
                se.insert(s[i]);
            }
        }
        return count;
    }
};