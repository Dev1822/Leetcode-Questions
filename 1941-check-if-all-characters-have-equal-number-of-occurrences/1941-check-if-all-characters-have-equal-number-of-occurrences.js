/**
 * @param {string} s
 * @return {boolean}
 */
var areOccurrencesEqual = function(s) {
    let obj={};
    let len=s.length;
    for(let i=0;i<len;i++){
        if(obj[s[i]]==undefined){
            obj[s[i]]=1;
        }
        else{
            obj[s[i]]=obj[s[i]]+1;
        }
    }

    for(let i in obj){
        if(obj[i]!==obj[s[0]]){
            return false;
        }
    }

    return true;
};