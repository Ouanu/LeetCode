#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int findRepeatNumber(vector<int>& nums) {
        int result = 0;
        for(int n:nums){
            result ^= n;
            if(result != 0){
                return n;
            }
        }
        return NULL;
    }

int main()
{
    vector<int> nums = {1, 2, 3, 4, 2};
    int result = findRepeatNumber(nums);
    cout << result << endl;
    return 0;
}