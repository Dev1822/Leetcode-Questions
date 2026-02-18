/**
 * @param {number[]} nums
 * @return {number[]}
 */
var runningSum = function(nums) {
    let arr=[];
    let x=nums[0];
    arr.push(x)
    for(let i=1;i<nums.length;i++){
        x+=nums[i];
        arr.push(x);
    }
    return arr
};