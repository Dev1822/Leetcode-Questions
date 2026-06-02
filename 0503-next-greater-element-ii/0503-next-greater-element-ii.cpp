class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int length=nums.size();
        vector <int> res(length,0);
        for(int i=0;i<length;i++){
            int element=nums[i];
            bool found=false;
            for(int j=i+1;j<length;j++){
                if(nums[j]>element){
                    res[i]=nums[j];
                    found=true;
                    break;
                }
            }
            if(!found){
                for(int j=0;j<i;j++){
                    if(nums[j]>element){
                        res[i]=nums[j];
                        found=true;
                        break;
                    }
                }
            }
            if(!found){
                res[i]=-1;
            }
        }
        return res;
    }
};