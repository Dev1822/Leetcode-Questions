class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> res;

        for (auto& i : queries) {
            int count = 0;

            for (auto& j : points) {
                int dx = j[0] - i[0];
                int dy = j[1] - i[1];

                int d = dx * dx + dy * dy;

                if (d <= i[2] * i[2]) {
                    count++;
                }
            }

            res.push_back(count);
        }

        return res;
    }
};