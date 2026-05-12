class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector <int> pos={};
        vector <int> neg={};
        int length=nums.size();
        for(int i=0;i<length;i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }

        vector <int> res(length,0);
        int e=0;
        int o=0;
        for(int i=0;i<length;i++){
            if(i%2==0){
                res[i]=pos[e];
                e++;
            }
            else{
                res[i]=neg[o];
                o++;
            }
        }

        return res;
    }
};