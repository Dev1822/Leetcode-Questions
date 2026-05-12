class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
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

        vector <int> res={};
        res.insert(res.end(),even.begin(),even.end());
        res.insert(res.end(),odd.begin(),odd.end());

        return res;
    }
};