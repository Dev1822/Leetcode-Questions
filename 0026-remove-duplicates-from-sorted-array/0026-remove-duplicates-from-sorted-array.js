var removeDuplicates = function(nums) {
    let obj = {};
    let count = 0;
    let arr = [];
    let len=nums.length;

    for (let i = 0; i < len; i++) {
        let x = nums[i];

        if (obj[x] === undefined) {
            obj[x] = 1;
            arr.push(x);
            count++;
        }
    }

    for (let i = 0; i < nums.length; i++) {
        nums[i] = arr[i] !== undefined ? arr[i] : "_";
    }

    return count;
};
