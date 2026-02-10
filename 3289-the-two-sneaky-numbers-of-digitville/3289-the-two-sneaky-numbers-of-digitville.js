/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getSneakyNumbers = function(nums) {
    let s=new Set()
    let res=[]
    let len=nums.length
    for(let i=0;i<len;i++){
        let x=nums[i]
        if(s.has(x)) res.push(x)
        else s.add(x)
    }
    return res
};