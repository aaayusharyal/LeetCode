class Solution {
public:
    int subtractProductAndSum(int n) {
       long long product = 1, sum = 0; //declaration
        while(n!=0)
        {
        int remainder = n%10; //gives the last value of the num
         product = product * remainder;//to find product
         sum = sum + remainder;
         n = n/10;//pops the alst element
         int ans = product - sum;// tostore value
        }
        return (product - sum); 
    }
};
