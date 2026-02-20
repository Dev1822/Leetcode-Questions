/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if (x<0 || (x%10===0 && x!==0)) return false;
    let temp=x;
    let a;
    let b=0;
    while(temp>0){
        a=temp%10;
        b=(b*10)+a;
        temp=Math.floor(temp/10);
    }

    return x==b;
};