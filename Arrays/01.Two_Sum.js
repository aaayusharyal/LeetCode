var twoSum = function(nums, target) {
    for(let index = 0; index<nums.length; index++)
    {
        for(let jaja=index+1; jaja<nums.length; jaja++)
        {
            if(nums[jaja] + nums[index] === target)
            return [index, jaja];
        }
     } return;
};
