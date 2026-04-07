class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> count={};
        int maxElement=-1;
        int maxCount=0;
        for(int i : nums){
            if(i%2==0){
                if(count[i]){
                    count[i]++;
                }
                else{
                    count[i]=1;
                }
                if(count[i]>maxCount){
                    maxCount=count[i];
                    maxElement=i;
                }
                if(count[i]==maxCount){
                    if(maxElement>i){
                        maxElement=i;
                    }
                }
            }
        }
        return maxElement;
    }
};