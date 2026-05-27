class Solution {
public:
    int compress(vector<char>& chars) {

        int length = chars.size();
        int i = 0;

        for (int j = 0; j < length; ) {

            char current = chars[j];
            int count = 0;

            while (j < length && chars[j] == current) {
                count++;
                j++;
            }

            chars[i] = current;
            i++;

            if (count > 1) {

                string cnt = to_string(count);

                for (char c : cnt) {
                    chars[i] = c;
                    i++;
                }
            }
        }

        return i;
    }
};