/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDisappearedNumbers = function(nums) {
    let s=new Set(nums);
    let res=[];
    let len=(nums.length)+1;
    for(let i=1;i<len;i++){
        if(!s.has(i)) res.push(i)
    }
    return res;
};