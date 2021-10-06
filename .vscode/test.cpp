#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minArray(vector<int> &numbers)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] > numbers[i + 1])
        {
            reverse(numbers.begin(), numbers.begin() + i);
            reverse(numbers.begin() + i + 1, numbers.end());
            reverse(numbers.begin(), numbers.end());
        }
    }
    int num = numbers[0];
    return num;
}
int main()
{
    vector<int> nums = {1,2,0,0,1};
    int result = minArray(nums);
    cout << result << endl;

    return 0;
}