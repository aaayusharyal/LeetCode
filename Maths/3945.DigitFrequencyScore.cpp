class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum = 0;
        //d * frequency(d) = sum of digits of d
        while(n !=0 )
        {
            int rem = n % 10;
            sum = sum + rem;
            n = n / 10;
        }
        return sum;
    }
};
