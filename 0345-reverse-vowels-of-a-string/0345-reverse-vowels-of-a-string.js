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
    vowels=vowels.reverse();
    let index = 0;
    let result = "";
    for (let i of s) {
        if (isVowel.has(i)) {
            result += vowels[index];
            index++
        } 
        else {
            result += i;
        }
    }

    return result;
};