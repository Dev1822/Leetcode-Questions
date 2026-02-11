/**
 * @param {string} s
 * @return {string}
 */
var sortVowels = function(s) {
/**
 * @param {string} s
 * @return {string}
 */
    let isVowel = new Set("aeiouAEIOU");
    let vowels = [];
    for (let i of s) {
        if (isVowel.has(i)) {
            vowels.push(i);
        }
    }
    vowels.sort((a, b) => a.charCodeAt(0) - b.charCodeAt(0));
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