class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.empty() || nums.size() == 0)
            return 0;
        int length = nums.size();
        int dp0 = 0;
        int dp1 = nums[0];
        for (int i = 1; i < length; i++) {
            int temp = max(dp0, dp1);
            dp1 = dp0 + nums[i];
            dp0 = temp;
        }
        return max(dp0, dp1);
    }
};