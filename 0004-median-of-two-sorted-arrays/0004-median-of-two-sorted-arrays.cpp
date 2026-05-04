class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr = nums1;
        arr.insert(arr.end(), nums2.begin(), nums2.end());

        sort(arr.begin(), arr.end());

        int n = arr.size();

        if (n % 2 == 0) {
            int middle = n / 2;
            return (arr[middle] + arr[middle - 1]) / 2.0;
        }
        else {
            int middle = n / 2;
            return arr[middle];
        }
    }
};