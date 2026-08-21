class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int travelTime=0;
        int collect=0;
        int Mmax=0;
        int Pmax=0;
        int Gmax=0;
        for(int i=0;i<garbage.size();i++){
            collect+=garbage[i].size();
            if(find(garbage[i].begin(),garbage[i].end(),'M')!=garbage[i].end()) Mmax=i;
            if(find(garbage[i].begin(),garbage[i].end(),'P')!=garbage[i].end()) Pmax=i;
            if(find(garbage[i].begin(),garbage[i].end(),'G')!=garbage[i].end()) Gmax=i;
        }
        for(int i : travel){
            int count=0;
            if(Mmax>0){
                count++;
                Mmax--;
            }
            if(Pmax>0){
                count++;
                Pmax--;
            }
            if(Gmax>0){
                count++;
                Gmax--;
            }
            travelTime+=i*count;
        }
        return travelTime+collect;
    }
};