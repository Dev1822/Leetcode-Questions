class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();

        int total = 0;
        for (int x : cardPoints)
            total += x;

        int window = n - k;

        if (window == 0)
            return total;

        int curr = 0;
        for (int i = 0; i < window; i++)
            curr += cardPoints[i];

        int minWindow = curr;

        for (int i = window; i < n; i++) {
            curr += cardPoints[i];
            curr -= cardPoints[i - window];
            minWindow = min(minWindow, curr);
        }

        return total - minWindow;
    }
};