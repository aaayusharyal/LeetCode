class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());//O(nlogn)
        for(int i=0; i<n-1; i++) //o(N)
        {
            if(nums[i] == nums[i+1])
            {
                return true;
            }
        }
        
    return false;}
};
