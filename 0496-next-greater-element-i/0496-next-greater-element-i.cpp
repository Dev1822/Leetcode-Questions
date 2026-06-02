class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int length1=nums1.size();
        int length2=nums2.size();
        for(int i=0;i<length1;i++){
            int index=0;
            for(int j=0;j<length2;j++){
                if(nums2[j]==nums1[i]){
                    index=j;
                    break;
                }
            }
            bool found=false;
            for(int j=index;j<length2;j++){
                if(nums2[j]>nums1[i]){
                    nums1[i]=nums2[j];
                    found=true;
                    break;
                }
            }
            if(!found){
                nums1[i]=-1;
            }
        }
        return nums1;
    }
};