class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int,int> obj={};
        for(int i : arr){
            if(obj[i]){
                obj[i]=obj[i]+1;
            }
            else{
                obj[i]=1;
            }
        }
        multiset <int> freq={};
        for(auto& [key,value] : obj){
            freq.insert(value);
        }
        for(auto& [key,value] : obj){
            if(freq.count(value)!=1){
                return false;
            }
        }
        return true;
    }
};