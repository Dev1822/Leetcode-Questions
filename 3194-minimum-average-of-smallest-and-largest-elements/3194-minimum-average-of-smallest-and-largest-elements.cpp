class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        double res = INT_MAX;
        int left = 0;
        int right = nums.size() - 1;
        while (left < right) {
            double average = (nums[left] + nums[right]) / 2.0;
            res = min(res, average);
            left++;
            right--;
        }

        return res;
    }
};