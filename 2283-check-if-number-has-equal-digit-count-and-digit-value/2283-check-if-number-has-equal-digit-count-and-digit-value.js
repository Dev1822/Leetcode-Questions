/**
 * @param {string} num
 * @return {boolean}
 */
var digitCount = function(num) {
    let m=new Map()
    for(let i of num){
        let j=parseInt(i)
        m.set(j, (m.get(j) || 0) + 1);
    }
    let len=num.length;
    for(let i=0;i<len;i++){
        if(parseInt(num[i])!=(m.get(i) || 0)) return false
    }
    return true
};