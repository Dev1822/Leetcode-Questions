class Solution {
public:
    string intToRoman(int num) {

        unordered_map<int, string> obj = {
            {1, "I"},
            {5, "V"},
            {10, "X"},
            {50, "L"},
            {100, "C"},
            {500, "D"},
            {1000, "M"}
        };

        string roman = "";
        string numString = to_string(num);

        int zeroes = numString.size() - 1;

        for(char c : numString) {

            int digit = c - '0';
            int tenth = pow(10, zeroes);

            if(digit == 4) {
                roman += obj[tenth] + obj[tenth * 5];
            }
            else if(digit == 9) {
                roman += obj[tenth] + obj[tenth * 10];
            }
            else {

                int value = digit * tenth;

                while(value >= 5 * tenth) {
                    roman += obj[5 * tenth];
                    value -= 5 * tenth;
                }

                while(value > 0) {
                    roman += obj[tenth];
                    value -= tenth;
                }
            }

            zeroes--;
        }

        return roman;
    }
};