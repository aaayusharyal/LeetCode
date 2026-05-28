class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elsum = 0;
        int digitsum = 0;
        for(int i=0; i<nums.size(); i++)
        {
            elsum+=nums[i];
        }
        for(int i=0; i<nums.size(); i++)
        {
            while(nums[i] !=0 && nums[i] >= 10)
            {
                int rem = nums[i] % 10;
                digitsum = digitsum + rem;
                nums[i]/=10;
            }
            digitsum += nums[i];
            
        }
        return abs(elsum - digitsum);
    }
};
