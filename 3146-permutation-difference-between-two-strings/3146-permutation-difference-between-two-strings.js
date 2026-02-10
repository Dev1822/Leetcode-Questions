/**
 * @param {string} s
 * @param {string} t
 * @return {number}
 */
var findPermutationDifference = function(s, t) {
    let m=new Map()
    let len=s.length
    for(let i=0;i<len;i++){
        m.set(s[i],i)
    }
    let pd=0;
    let x;
    for(let j=0;j<len;j++){
        pd+=Math.abs(m.get(t[j])-j)
    }
    return pd
};