/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
    let intersection=[];
    let len1=nums1.length;
    let len2=nums2.length;
    for(let i=0;i<len1;i++){
        let x=nums1[i];
        for(let j=0;j<len2;j++){
            if(nums2[j]===x && !(intersection.includes(x))){
                intersection.push(x)
            }
        }
    }
    return intersection;
};