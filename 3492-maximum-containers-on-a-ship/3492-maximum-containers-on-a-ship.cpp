class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int total=n*n;
        int i=1;
        int weight=0;
        int count=0;
        while(i<=total){
            if(weight+w>maxWeight){
                return count;
            }
            weight+=w;
            i++;
            count++;
        }
        return count;
    }
};