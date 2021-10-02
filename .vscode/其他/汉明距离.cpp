class Solution {
public:
    int hammingDistance(int x, int y) {
        int xory = x ^ y;
        int res = 0;
        while (xory != 0) {
            res += xory & 1;
            xory = xory >> 1;
        }
        return res;
    }
};