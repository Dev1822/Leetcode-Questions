class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set <int> jewelsSet(jewels.begin(),jewels.end());
        int count=0;
        for(char i : stones){
            if(jewelsSet.count(i)){
                count++;
            }
        }
        return count;
    }
};