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
                char sign=i[0];
                bool negative=false;
                int index=0;
                if(sign=='-'){
                    negative=true;
                    index=1;
                }
                int num=0;
                for(int j=index;j<i.size();j++){
                    num=(num*10)+(i[j]-'0');
                }
                if(negative){
                    num=0-num;
                }
                st.push(num);
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