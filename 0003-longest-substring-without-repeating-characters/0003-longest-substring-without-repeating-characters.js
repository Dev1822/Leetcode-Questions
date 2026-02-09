/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    let max=0;
    let len=s.length
    let x;
    let count;
    for(let i=0;i<len;i++){
        x=new Set()
        count=0
        for(let j=i;j<len;j++){
            let ele=s[j]
            if(x.has(ele)){
                break;
            }
            else{
                x.add(ele);
                count++
            }
        }
        if(count>max){
            max=count;
        }
    }
    return max;
};