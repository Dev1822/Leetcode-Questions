/**
 * @param {string} jewels
 * @param {string} stones
 * @return {number}
 */
var numJewelsInStones = function(jewels, stones) {
    jewels=new Set(jewels)
    let count=0
    for(let i of stones){
        if(jewels.has(i)) count++
    }
    return count
};