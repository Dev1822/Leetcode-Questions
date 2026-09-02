class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack <int> st={};
        int score=0;
        for(string i : operations){
            if(i=="D"){
                st.push(st.top()*2);
            }
            else if(i=="C"){
                st.pop();
            }
            else if(i=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b);
                st.push(a);
                st.push(a+b);
            }
            else{
                st.push(stoi(i));
            }
        }
        while(!st.empty()){
            score+=st.top();
            cout<<score<<endl;
            st.pop();
        }
        return score;
    }
};