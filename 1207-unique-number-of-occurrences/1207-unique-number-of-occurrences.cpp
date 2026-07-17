class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int,int> obj={};
        for(int i : arr){
            obj[i]++;
        }
        set <int> freq={};
        for(auto& [key,value] : obj){
            freq.insert(value);
        }
        return freq.size()==obj.size();
    }
};