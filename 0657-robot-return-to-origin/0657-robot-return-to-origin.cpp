class Solution {
public:
    bool judgeCircle(string moves) {
        vector <int> position={0,0};
        for(char i : moves){
            if(i=='U'){
                position[1]++;
            }
            else if(i=='D'){
                position[1]--;
            }
            else if(i=='L'){
                position[0]--;
            }
            else if(i=='R'){
                position[0]++;
            }
        }

        return position==vector<int>{0,0};
    }
};