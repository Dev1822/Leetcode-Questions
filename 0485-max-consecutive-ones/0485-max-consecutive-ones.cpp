class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int Maxres=0;
        int res=0;
        if(nums[0]==1) res=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==1){
                if(nums[i-1]==1 || res==0)
                res++;
            }
            else{
                Maxres=max(res,Maxres);
                res=0;
            }
        }
        Maxres=max(res,Maxres);
        return Maxres;
    }
};