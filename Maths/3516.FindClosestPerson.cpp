class Solution {
public:
    int findClosest(int x, int y, int z) {
        int xdiff = abs(x - z);
        int ydiff = abs(y - z);
        if(xdiff > ydiff)
        {
            return 2;
        }
        else if(xdiff < ydiff)
        {
            return 1;
        }
        else return 0;
    }
};
