class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int length=arr.size();
        multiset <int> setElements(arr.begin(),arr.end());
        float percent=length*0.25;
        for(int i : arr){
            if(setElements.count(i)>percent){
                return i;
            }
        }
        return 0;
    }
};