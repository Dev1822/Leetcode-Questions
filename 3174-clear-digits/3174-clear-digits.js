/**
 * @param {string} s
 * @return {string}
 */
var clearDigits = function(s) {
    let res=[];
    let x=new Set("0123456789")
    for(let i of s){
        if (x.has(i)){
            res.pop();
        }else{
            res.push(i);
        }
    }

    return res.join("");
};