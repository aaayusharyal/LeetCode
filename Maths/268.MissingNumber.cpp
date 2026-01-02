class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int qsum = 0;
        for(int index=0; index<n; index++)
        {
             qsum = qsum + nums[index];
        }
           return (sum - qsum);
    }
    
};
