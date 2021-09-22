class Solution {
public:
    int reverse(int x) {
        int result = 0;
        while(x){
            int t = x % 10;
            // 若题目要求不允许存储64位整数，则加上下面这段代码：
            // if(result > INT_MAX / 10 || result < INT_MIN / 10) return 0;
            result = result * 10 + t;
            x /= 10;
        }
        return result;
    }
};