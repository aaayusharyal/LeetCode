class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int zeroes = 0;
        int ones = 0;
        int twos = 0;
        for(int i=0; i<n; i++)
        {
            if(nums[i] == 0)
            {
                zeroes++;
            }
            else if(nums[i] == 1)
            {
                ones++;
            }
            else {
                twos++;
            }
        }
        for(int i=0; i<zeroes; i++)
        {
            nums[i] = 0;
        }
        for(int i=zeroes; i<zeroes+ones; i++)
        {
            nums[i] = 1;
        }
        for(int i = zeroes + ones; i< zeroes + ones + twos; i++)
        {
            nums[i] = 2;
        }
    }
};
