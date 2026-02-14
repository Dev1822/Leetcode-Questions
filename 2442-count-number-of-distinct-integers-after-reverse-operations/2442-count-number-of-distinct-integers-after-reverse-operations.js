/**
 * @param {number[]} nums
 * @return {number}
 */
var countDistinctIntegers = function(nums) {
    let len=nums.length
    for(let i=0;i<len;i++){
        let count=0;
        let x=nums[i]
        while(x>0){
            count=(count*10)+(x%10);
            x=parseInt(x/10);
        }
        nums.push(count)
    }
    let s=new Set(nums)
    return [...s].length
};