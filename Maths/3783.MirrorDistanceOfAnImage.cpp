class Solution {
public:
    int mirrorDistance(int n) {

        return abs(n - reverse(n));
        
    }
    int reverse(int n)
    {
        int remainder;
        int reverse = 0;
        while(n!=0)
        {
            remainder = n%10;
            reverse = reverse * 10 + remainder;
            n = n/10;

        }
        return reverse;
    }
};
