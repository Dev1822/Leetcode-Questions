class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector <int> even={};
        vector <int> odd={};
        for(int i : nums){
            if(i%2==0){
                even.push_back(i);
            }
            else{
                odd.push_back(i);
            }
        }
        int length=nums.size();
        vector <int> res(length,0);
        int e=0;
        int o=0;
        for(int i =0;i<length;i++){
            if(i%2==0){
                res[i]=even[e];
                e++;
            }
            else{
                res[i]=odd[o];
                o++;
            }
        }

        return res;
    }
};