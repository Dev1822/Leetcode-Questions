class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int count=0;
        int next=0;
        for (int num : nums) {
            if (num >= next) {
                next = num + 1;
            } 
            else {
                count += next - num;
                next++;
            }
        }

        return count;
    }
};