/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getSneakyNumbers = function(nums) {
    let s=new Set()
    let res=[]
    for(let i of nums){
        if(s.has(i)) res.push(i)
        else s.add(i)
    }
    return res
};