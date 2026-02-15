/**
 * @param {string[]} words
 * @param {number} k
 * @return {string[]}
 */
var topKFrequent = function(words, k) {
    let map = new Map();
    let set=new Set(words)
    
    for (let j of words) {
        map.set(j,(map.get(j) || 0) + 1);
    }

    let res = [...set].sort((a, b) => {
        if (map.get(b) === map.get(a)) {
            return a.localeCompare(b);
        }
        return map.get(b) - map.get(a);
    });

    return res.slice(0,k);
};