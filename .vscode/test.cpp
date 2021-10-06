#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int result = 0;
    for(int i=0; i<=nums.size(); i++){
        if(i<nums.size()){
            result ^= nums[i];
        }
        result ^= i;
    }
    return result;
}
int main()
{
    vector<int> nums = {0, 1, 3};
    int result = missingNumber(nums);
    cout << result << endl;

    return 0;
}