/**
 * @param {string} s
 * @param {string} t
 * @return {character}
 */
var findTheDifference = function(s, t) {
    const map=new Map();
    
    for (let i of s) {
        map.set(i,(map.get(i) || 0)+1);
    }
    for (let j of t) {
        if (!map.has(j) || map.get(j) === 0) {
            return j;
        }
        map.set(j,map.get(j)-1);
    }
};