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
<<<<<<< HEAD
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
=======
>>>>>>> 60cab792629d805a8e8344b4f8c86681da7f1473
};