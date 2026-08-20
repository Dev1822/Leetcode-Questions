class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map <int,int> freq={};
        int maxFreq=0;
        for(int i : nums){
            freq[i]++;
            if(freq[i]>maxFreq){
                maxFreq=freq[i];
            }
        }
        vector<vector<int>> res={};
        while(maxFreq>0){
            vector<int> temp={};
            for(auto& [key,value] : freq){
                if(value>0){
                    temp.push_back(key);
                    freq[key]--;
                }
            }
            maxFreq--;
            res.push_back(temp);
        }
        return res;
    }
};