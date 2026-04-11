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
        set <int> freq={};
        for(auto& [key,value] : obj){
            freq.insert(value);
        }
        return freq.size()==obj.size();
    }
};