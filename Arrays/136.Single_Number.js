/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let xor = 0;
    for(let haha=0; haha<nums.length; haha++)
    {
        xor = xor ^ nums[haha];
    }
    return xor;
};
