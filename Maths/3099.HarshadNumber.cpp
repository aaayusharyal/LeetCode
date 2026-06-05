class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        if(x % digitsum(x) == 0)
        {
            return digitsum(x);
        }
        return -1;
    }
    int digitsum(int n)
    {
        int sum = 0;
        while(n > 0)
        {
            int rem = n % 10;
            sum+=rem;
            n = n / 10;
        }
        return sum;
    }
};
