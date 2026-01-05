class Solution {
    public boolean isPowerOfThree(int n) {
        if(n==1) return true;
        else{
            for(int i=1; i<=30; i++)
            {
                double answer = Math.pow(3, i);
                if(n == answer) return true;
            }
        }
return false;    }
}
