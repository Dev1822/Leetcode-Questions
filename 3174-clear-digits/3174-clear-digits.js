/**
 * @param {string} s
 * @return {string}
 */
var clearDigits = function(s) {
    let res=[];
    for(let i of s){
        if (i>='0' && i<='9'){
            res.pop();
        }else{
            res.push(i);
        }
    }

    return res.join("");
};