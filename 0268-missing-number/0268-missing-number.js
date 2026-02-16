/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
        let s=new Set(nums)
        let i=0
        let found
        while(true){
            if(!s.has(i)) return i
            i++
        }  
};