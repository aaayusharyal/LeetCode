class Solution {
public:
    int countEven(int num) {
        int count = 0;
        for(int i=1; i<=num; i++)
        {
            if(digitsum(i) % 2 == 0)
            {
                count++;
            }
        }
        return count;
    }

    int digitsum(int n)
    {
        int dsum = 0;
        while(n!=0)
        {
            int rem = n % 10;
            dsum = dsum + rem;
            n = n / 10;
        }
        return dsum;
    }
};
