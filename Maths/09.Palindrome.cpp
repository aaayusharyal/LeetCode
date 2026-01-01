class Solution {
public:
    bool isPalindrome(int x) 
    {

        if (x < 0) return false;

        int original = x;   // must store original number
       long int reverse = 0;

        while (x != 0)
        {
           long int remainder = x % 10;
            reverse = reverse * 10 + remainder;
            x = x / 10;
        }

        return reverse == original;
    }
};
