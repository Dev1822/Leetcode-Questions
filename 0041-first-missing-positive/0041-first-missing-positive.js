/**
 * @param {number[]} nums
 * @return {number}
 */
var firstMissingPositive = function(nums) {
        let s=new Set(nums)
        let i=1
        let found
        while(true){
            if(!s.has(i)) return i
            i++
        }
};