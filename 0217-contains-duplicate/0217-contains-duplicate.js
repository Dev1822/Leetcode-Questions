/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let len1=nums.length;
    nums=new Set(nums);
    nums=[...nums];
    let len2=nums.length;
    return len1!==len2;
};