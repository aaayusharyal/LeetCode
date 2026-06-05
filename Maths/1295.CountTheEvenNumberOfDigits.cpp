class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int counts = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(countDigits(nums[i]) % 2 == 0)
            {
                ++counts;
            }  
              
        }
        return counts;
      
    }
    int countDigits(int n)
    {
        int count = 0;
        while(n !=0)
        {
            n = n / 10;
            ++count;
        }
        return count;

    }
};
