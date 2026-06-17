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

        vector <string> resVector={};
        while(!st.empty()){
            resVector.push_back(st.top());
            st.pop();
        }
        reverse(resVector.begin(),resVector.end());
        string res="";
        for(string i : resVector){
            res+='/'+i;
        }
        if(res==""){
            return "/";
        }
        return res;
    }
};