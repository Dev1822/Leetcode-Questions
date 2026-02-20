/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
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