/**
 * @param {number[]} nums1
 * @param {number} m
 * @param {number[]} nums2
 * @param {number} n
 * @return {void} Do not return anything, modify nums1 in-place instead.
 */
var merge = function(nums1, m, nums2, n) {
    for(let i=0;i<n;i++){
        let found=false;
        for(let j=0;j<m+i;j++){
            if(nums1[j]>nums2[i]){
                nums1.splice(j,0,nums2[i]);
                found=true;
                break;
            }
        }
        if(!found){
            nums1.splice(m+i,0,nums2[i]);
        }
        nums1.pop();
    }
};