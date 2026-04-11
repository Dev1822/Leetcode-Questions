class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        multiset <int> freq={};
        for(int i : nums){
            if(freq.count(i)<2){
                freq.insert(i);
            }
        }
        int index=0;
        for(int i : freq){
            nums[index]=i;
            index++;
        }
        return freq.size();
    }
};