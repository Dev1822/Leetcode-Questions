class Solution {
public:
    int secondHighest(string s) {
        int largest = -1;
        int second = -1;

        for (int i = 0; i < size(s); i++) {
            if (s[i] >= '0' && s[i] <= '9') {
                int x = s[i] - '0';

                if (x > largest) {
                    second = largest;
                    largest = x;
                }
                else if (x < largest && x > second) {
                    second = x;
                }
            }
        }

        return second;
    }
};