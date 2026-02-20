/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(s) {
    let obj={"(":")","[":"]","{":"}"}
    let arr=[];
    let len=s.length;
    for(let i=0;i<len;i++){
        if(s[i]=="(" || s[i]=="[" || s[i]=="{"){
            arr[arr.length]=s[i];
        }
        else{
            if (arr.length === 0){
                return false;
            }
            if(s[i]==obj[arr[arr.length-1]]){
                arr.pop();
            }
            else{
                return false;
            }
        }
    }
    if(arr.length===0){
        return true;
    }
    else{
        return false;
    }
};