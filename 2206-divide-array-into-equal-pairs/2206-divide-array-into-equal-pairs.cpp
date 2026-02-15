class Solution {
public:
    bool divideArray(vector<int>& nums) {
        map <int,int> m={};
        for(int i : nums){
            m[i]++;
        }
        for(auto& [key, value] : m){
            if(value%2!=0) return false;
        }
        return true;
    }
};