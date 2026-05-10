class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        //three largest numbers
        int a1 = nums[n-1] * nums[n-2] * nums[n-3];
        //two negative and one positive
        int a2 = nums[0] * nums[1] * nums[n-1];

        return max(a1, a2);
    }
};
