//利用斐波那契数列解决
class Solution {
public:
    int climbStairs(int n) {
        double a = sqrt(5);
        return (int)((pow((1 + a) / 2, n+1) - pow((1 - a) / 2, n+1))/a);
    }
};