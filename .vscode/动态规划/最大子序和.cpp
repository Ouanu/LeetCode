class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int length = nums.size();
        int cur = nums[0];
        int maxVal = cur;
        for (int i = 1; i < length; i++) {
            cur = max(cur, 0) + nums[i];
            maxVal = max(maxVal, cur);
        }
        return maxVal;
    }
};