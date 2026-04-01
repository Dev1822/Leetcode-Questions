var removeDuplicates = function(nums) {
    if(nums.length===0) return 0;
    let i=0;
    let j=0;
    let len=nums.length;
    while(j<len){
        if(nums[j]!==nums[i]){
            i++;
            nums[i]=nums[j];
        }
        j++;
    }

    return i+1;
};
