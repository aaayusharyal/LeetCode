class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2; //givbes the sum upto nth term
        int qsum = 0; // question ko sum nikalne,initially 0
        for(int index=0; index<n; index++)
        {
             qsum = qsum + nums[index];
        }
           return (sum - qsum);// diff of sum annd question ko sum
    }
    
};
