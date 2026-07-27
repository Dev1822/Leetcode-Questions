class Solution {
public:
    bool divisorGame(int n) {
        bool AliceTurn = true;

        while (n > 1) {
            int x;
            for (x = 1; x < n; x++) {
                if (n % x == 0)
                    break;
            }
            n -= x;
            AliceTurn = !AliceTurn;
        }
        return !AliceTurn;
    }
};