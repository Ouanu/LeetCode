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