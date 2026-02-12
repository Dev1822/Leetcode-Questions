/**
 * @param {string} allowed
 * @param {string[]} words
 * @return {number}
 */
var countConsistentStrings = function(allowed, words) {
    allowed=new Set(allowed)
    let count=0
    let check=true
    for(let i of words){
        let len=i.length
        check=true
        for(let j=0;j<len;j++){
            if(!allowed.has(i[j])){
                check=false
                break
            }
        }
        if(check) count++
    }

    return count
};