class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector <int> res(2*n,0);
        int x=0;
        int y=1;
        for(int i=0;i<n;i++){
            res[x]=nums[i];
            res[y]=nums[n+i];
            x+=2;
            y+=2;
        }
        return res;
    }
};