#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n);

int main()
{
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};
    merge(nums1, 3, )
    cout << nums1 << endl;
    return 0;
}

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0,j=0; i<m||j<n; ){
            if(nums1[i] >= nums2[j]){
                nums1.insert(nums1.begin() + i, nums2[j]);
            } else {
                nums1.insert(nums1.begin() + i + 1, nums2[j]);
            }
        }
    }