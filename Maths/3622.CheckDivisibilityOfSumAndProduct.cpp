class Solution {
public:
    bool checkDivisibility(int n) {
        int digitsum = 0;
        int digitproduct = 1;
        int temp = n;
        while(n != 0)
        {
            int rem = n % 10;
            digitsum = digitsum + rem;
            digitproduct = digitproduct * rem;
            n = n / 10;
        }
        if(temp % (digitsum + digitproduct) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
