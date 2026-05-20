class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int length=nums.size();
        int half=length/2;
        vector <int> res(length,0);
        int x=0;
        int y=1;
        for(int i=0;i<half;i++){
            res[x]=nums[i];
            res[y]=nums[half+i];
            x+=2;
            y+=2;
        }
        return res;
    }
};