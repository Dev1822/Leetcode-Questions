class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map <int,int> freq={};
        for(int i : nums){
            freq[i]++;
        }
        int count=0;
        for(auto& [key,value] : freq){
            if(value==1){
                count+=key;
            }
        }
        return count;
    }
};