class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i<=right; i++)
        {
            if(divide(i))
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
    bool divide(int n)
    {
        int temp = n;
        while(temp != 0)
        {
            int rem = temp % 10;
            if(rem == 0)
            {
                return false;
            }
            if(n % rem !=0)
            {
                return false;
            }
            temp = temp/10;
        }
        return true;
    }
};
