/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function(nums, val) {
    let count=0;
    let arr=[];
    for(let i=0;i<nums.length;i++){
        if(nums[i]===val){
            count++;
            continue;
        }
        else{
            arr.push(nums[i]);
        }
    }
    for(let i=0;i<arr.length;i++){
        nums[i]=arr[i];
    }

    return nums.length-count;
};