/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    let len=nums.length;
    let sum;
    for(let i=0;i<len;i++){
        for(let j=i+1;j<len;j++){
            sum=nums[i]+nums[j];
            if(sum==target){
                return [i,j];
            }
        }
    }
};