/**
 * @param {string} s
 * @return {number}
 */
var maxFreqSum = function(s) {
    let vowels=new Set("aeiou")
    let vowelCount=new Map()
    let consonantCount=new Map()
    for(let j of s){
        if(vowels.has(j)){
            vowelCount.set(j,(vowelCount.get(j) || 0)+1)
        }
        else{
            consonantCount.set(j,(consonantCount.get(j) || 0)+1)
        }
    }
    let maxVowel=0
    for(let [key,value] of vowelCount){
        if(value>maxVowel){
            maxVowel=value
        }
    }
    let maxConsonant=0
    for(let [key,value] of consonantCount){
        if(value>maxConsonant){
            maxConsonant=value
        }
    }

    return maxVowel+maxConsonant
};