/**
 * @param {number[]} nums
 * @return {void} Do not return anything, modify nums in-place instead.
 */
var moveZeroes = function(nums) {
    let insertPos = 0;
    let len=nums.length;
    for (let i = 0; i < len; i++) {
        if (nums[i] !== 0) {
            nums[insertPos] = nums[i];
            insertPos++;
        }
    }
    while (insertPos < len) {
        nums[insertPos] = 0;
        insertPos++;
    }
};
