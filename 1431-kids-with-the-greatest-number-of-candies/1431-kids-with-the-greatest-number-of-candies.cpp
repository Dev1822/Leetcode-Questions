class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=candies[0];
        for(int i : candies){
            if(i>max){
                max=i;
            }
        }
        vector <bool> res={};
        for(int i : candies){
            i+=extraCandies;
            if(i>=max){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
    }
};