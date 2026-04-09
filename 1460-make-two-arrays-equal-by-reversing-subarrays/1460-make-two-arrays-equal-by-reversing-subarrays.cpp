class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        int length=arr.size();
        for(int i=0;i<length;i++){
            if(target[i]!=arr[i]){
                return false;
            }
        }
        return true;
    }
};