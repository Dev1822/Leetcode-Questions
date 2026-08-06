class Solution {
public:
    string countAndSay(int n) {
        string res="1";
        for(int i=2;i<=n;i++){
            int count=1;
            string temp="";
            for(int j=0;j<res.size();j++){
                if(res[j]!=res[j+1]){
                    temp+=to_string(count);
                    temp+=res[j];
                    count=1;
                }
                else{
                    count++;
                }
            }
            res=temp;
        }
        return res;
    }
};