class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int col = coordinates[0];
        int row = coordinates[1];
        
        return (col + row) % 2 == 1;
    }
};