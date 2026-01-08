class Solution {
public:
    int addDigits(int n) {
        if(n==1) return 1;
        else return 1 + (n-1) % 9;
    }
};
