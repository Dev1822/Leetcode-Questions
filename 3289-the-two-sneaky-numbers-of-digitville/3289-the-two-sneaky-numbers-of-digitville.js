/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getSneakyNumbers = function(nums) {
    let m=new Map()
    for(let i of nums){
        if(m.has(i)){
            m.set(i,m.get(i)+1)
        }
        else{
            m.set(i,1)
        }
    }

    res=[]
    for(let [key,values] of m){
        if(values===2){
            res.push(key)
        }
    }

    return res;
};