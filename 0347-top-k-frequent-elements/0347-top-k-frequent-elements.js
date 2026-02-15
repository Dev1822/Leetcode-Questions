/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function(nums, k) {
    let map = new Map();
    let set=new Set(nums)
    
    for (let j of nums) {
        map.set(j,(map.get(j) || 0) + 1);
    }

    let res = [...set].sort((a, b) =>map.get(b) - map.get(a));

    return res.slice(0,k)
};