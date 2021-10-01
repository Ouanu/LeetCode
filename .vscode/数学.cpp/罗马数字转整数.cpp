class Solution
{
public:
    int romanToInt(string s)
    {
        int pre = 0, cur;
        int sum = 0;
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            switch (s[i])
            {
            case 'I':
                cur = 1;
                sum += cur;
                pre = cur;
                break;
            case 'V':
                cur = 5;
                sum += cur - (pre == 1 ? 2 : 0);
                pre = cur;
                break;
            case 'X':
                cur = 10;
                sum += cur - (pre == 1 ? 2 : 0);
                pre = cur;
                break;
            case 'L':
                cur = 50;
                sum += cur - (pre == 10 ? 20 : 0);
                pre = cur;
                break;
            case 'C':
                cur = 100;
                sum += cur - (pre == 10 ? 20 : 0);
                pre = cur;
                break;
            case 'D':
                cur = 500;
                sum += cur - (pre == 100 ? 200 : 0);
                pre = cur;
                break;
            case 'M':
                cur = 1000;
                sum += cur - (pre == 100 ? 200 : 0);
                pre = cur;
                break;
            default:
                break;
            }
        }
        return sum;
    }
};