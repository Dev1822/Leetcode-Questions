class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        int i = 0;

        while (i < path.size()) {
            while (i < path.size() && path[i] == '/') {
                i++;
            }

            string temp = "";
            while (i < path.size() && path[i] != '/') {
                temp += path[i];
                i++;
            }

            if (temp == "" || temp == ".") {
                continue;
            }
            else if (temp == "..") {
                if (!st.empty()) {
                    st.pop();
                }
            }
            else {
                st.push(temp);
            }
        }

        vector<string> dirs;
        while (!st.empty()) {
            dirs.push_back(st.top());
            st.pop();
        }

        reverse(dirs.begin(), dirs.end());

        string res = "";
        for (string dir : dirs) {
            res += "/" + dir;
        }

        return res.empty() ? "/" : res;
    }
};