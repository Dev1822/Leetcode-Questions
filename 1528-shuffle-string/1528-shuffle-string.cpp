class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int length=s.size();
        vector <int> arr(length,0);
        for(int i=0;i<length;i++){
            arr[indices[i]]=s[i];
        }
        string res="";
        for(char i : arr){
            res+=i;
        }
        return res;
    }
};