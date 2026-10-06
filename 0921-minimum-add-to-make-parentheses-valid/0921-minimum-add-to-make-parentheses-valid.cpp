class Solution {
public:
    int minAddToMakeValid(string s) {
        stack <char> st={};
        for(char i : s){
            if(st.empty()){
                st.push(i);
            }
            else{
                if(i==st.top()){
                    st.push(i);
                }
                else{
                    if(!st.empty()){
                        if(st.top()==')'){
                            st.push(i);
                        }
                        else{
                            st.pop();
                        }
                    }
                }
            }
        }
        int count=0;
        while(!st.empty()){
            count++;
            st.pop();
        }
        return count;
    }
};