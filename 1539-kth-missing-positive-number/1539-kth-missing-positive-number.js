/**
 * @param {number[]} arr
 * @param {number} k
 * @return {number}
 */
var findKthPositive = function(arr, k) {
        let s=new Set(arr);
        let count=0;
        let i=0;
        while(count!=k){
            i++;
            if(!s.has(i)) count++;
        }
        return i;  
};