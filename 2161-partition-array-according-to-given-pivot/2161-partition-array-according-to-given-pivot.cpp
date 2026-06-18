class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector <int> less={};
        vector <int> more={};
        int equal=0;
        for(int i : nums){
            if(i<pivot){
                less.push_back(i);
            }
            else if(i>pivot){
                more.push_back(i);
            }
            else{
                equal++;
            }
        }
        for(int i=0;i<equal;i++){
            less.push_back(pivot);
        }
        for(int i : more){
            less.push_back(i);
        }
        return less;
    }
};