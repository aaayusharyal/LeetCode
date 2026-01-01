class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0; 
        int end = nums.size() - 1;
       
        while(start<=end)
        {
             int mid = start + (end - start)/2;
        if(target > nums[mid])
          start = mid + 1;
        else if(nums[mid]==target)
        {
         return mid;
        }
        else
         end = mid-1;
        }
     return -1; }
};

//each iteration n\2, 2\4, n\8....... n\k
