class Solution {
public:
    int thirdMax(vector<int>& arr) {
        long int largest = LONG_MIN;
        long int second = LONG_MIN;
        long int third = LONG_MIN;

        for (int x : arr) {
            if (x > largest) {
                third = second;
                second = largest;
                largest = x;
            }
            else if (x > second && x<largest) {
                third = second;
                second = x;
            }
            else if (x > third && x<second) {
                third = x;
            }
        }

        if(arr.size()<3 || third==LONG_MIN) return largest;

        return third;
    }
};