class Solution {
public:
    bool checkSorted(vector<int>& nums){
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int index=0;
        int minSum=INT_MAX;
        int count=0;
        while(!checkSorted(nums)){
            for(int i=0;i<nums.size()-1;i++){
                int sum=nums[i]+nums[i+1];
                cout<<sum<<endl;
                if(sum<minSum){
                    minSum=sum;
                    index=i;
                }
            }
            nums[index]=minSum;
            for(int i=index+1;i<nums.size()-1;i++){
                nums[i]=nums[i+1];
            }
            nums.pop_back();
            count++;
            minSum=INT_MAX;
        }
        return count;
    }
};