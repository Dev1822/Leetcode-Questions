/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
    let intersection=new Set();
    nums1=new Set(nums1)
    for(let i of nums2){
        if(nums1.has(i) && !(intersection.has(i))){
            intersection.add(i)
        }
    }
    intersection=[...intersection]
    return intersection;
};