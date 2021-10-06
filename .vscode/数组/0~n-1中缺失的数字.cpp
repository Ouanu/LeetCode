class Solution {
public:
    int missingNumber(vector<int> &nums){
        int result = 0;
        for(int i=0; i<=nums.size(); i++){
            if(i<nums.size()){
                result ^= nums[i];
            }
            result ^= i;
        }
        return result;
    }
};

// 二分法 （重点）
class Solution {
public:
    int missingNumber(vector<int> &nums){
        int i=0, j=nums.size()-1;
        int m = 0;
        while(i<=j){
            m = (i + j) / 2;
            if(nums[m] == m) i = m + 1;
            else j = m - 1;
        }
        return i;
    }
};