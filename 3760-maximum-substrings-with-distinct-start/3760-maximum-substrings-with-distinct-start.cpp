class Solution {
public:
    int maxDistinct(string s) {
        set <int> arr={};
        int count=0;
        int length=s.size();
        for(int i=0;i<length;i++){ 
            if(arr.count(s[i])==0){ 
                count++; 
                arr.insert(s[i]);
            } 
        } 
        return count;
    }
};