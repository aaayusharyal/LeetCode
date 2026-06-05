class Solution {
public:
    bool isSameAfterReversals(int num) {
        int ans = reverse(num);
        if(reverse(ans) == num)
        {
            return true;
        }
        return false;
    }

    int reverse(int n)
    {
        int rev = 0;
        while(n != 0)
        {
            int rem = n % 10;
            rev = rev * 10 + rem;
            n = n / 10;
        }
        return rev;

    }
};
