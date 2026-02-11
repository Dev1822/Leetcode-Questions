/**
 * @param {string} s
 * @return {string}
 */
var reverseVowels = function(s) {
    let isVowel = new Set("aeiouAEIOU");
    let vowels = [];
    for (let i of s) {
        if (isVowel.has(i)) {
            vowels.push(i);
        }
    }
    vowlen=vowels.length
    reversed=[]
    for (let i=vowlen-1;i>=0;i--) {
        reversed.push(vowels[i]);
    }
    let index = 0;
    let result = "";
    for (let i of s) {
        if (isVowel.has(i)) {
            result += reversed[index];
            index++
        } 
        else {
            result += i;
        }
    }

    return result;
};