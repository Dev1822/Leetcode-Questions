/**
 * @param {string} s
 * @return {string}
 */
var frequencySort = function(s) {
    let map = new Map();
    
    for (let j of s) {
        map.set(j,(map.get(j) || 0) + 1);
    }
    let sArr=[...s];
    let res=sArr.sort((a, b) => {
        if (map.get(b) === map.get(a)) {
            return a.localeCompare(b);
        }
        return map.get(b) - map.get(a);
    })


    return res.join("");
};