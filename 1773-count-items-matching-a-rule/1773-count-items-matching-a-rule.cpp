class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        unordered_map <string,int> indices={
            {"type",0},
            {"color",1},
            {"name",2}
        };
        int count=0;
        for(auto& i : items){
            if(i[indices[ruleKey]]==ruleValue){
                count++;
            }
        }
        return count;
    }
};