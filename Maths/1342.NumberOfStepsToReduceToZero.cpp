class Solution {
public:
    int numberOfSteps(int num) {
        int co = 0;
        while(num != 0)
        {
            if(num % 2 == 0)
            {
                num = num / 2;
                co = co + 1;
            }
            else {
                num = num - 1;
                co ++;
            }
            
        }
        return co;
        
    }
};
