/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let longest;
    let max=0;
    let len=s.length
    for(let i=0;i<len;i++){
        let x="";
        for(let j=i;j<len;j++){
            if(x.includes(s[j])){
                break;
            }
            else{
                x+=s[j];
            }
        }
        if(x.length>max){
            max=x.length;
            longest=x;
        }
    }
    return max;
};