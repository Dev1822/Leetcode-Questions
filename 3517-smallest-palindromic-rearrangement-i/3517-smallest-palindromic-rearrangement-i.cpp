class Solution {
public:
    string smallestPalindrome(string s) {
        map <char,int> freq={};
        for(char i : s){
            freq[i]++;
        }
        int left=0;
        int right=s.size()-1;
        vector <char> resVector(s.size(),' ');
        for(auto& [key,value] : freq){
            if(value%2==0){
                while(value!=0){
                    resVector[left]=key;
                    resVector[right]=key;
                    left++;
                    right--;
                    value-=2;
                }
            }
            else{
                while(value!=1){
                    resVector[left]=key;
                    resVector[right]=key;
                    left++;
                    right--;
                    value-=2;
                }
                resVector[s.size()/2]=key;
            }
        }
        string res="";
        for(char i : resVector){
            res+=i;
        }
        return res;
    }
};