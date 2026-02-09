/**
 * @param {number[]} nums
 * @param {number} k
 * @return {boolean}
 */
var containsNearbyDuplicate = function(nums, k) {
    let hm=new Map()
    let len=nums.length;
    for(let i=0;i<len;i++){
        let x=nums[i]
        if(hm.has(x)){
            let abs=hm.get(x)-i
            if(abs<0) abs=0-abs
            if(abs<=k) return true;
        }
        hm.set(x,i)
    }
    return false;
};