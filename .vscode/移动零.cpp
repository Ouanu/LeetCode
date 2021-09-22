class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left=0, right=1;
        for(right; right<=nums.size()-1; right++){
            if(nums[left]==0&&nums[right]!=0){
                nums[left]=nums[right];
                nums[right]=0;
                left++;
            } else if(nums[left]==0&&nums[right]==0){
                continue;
            } else {
                left++;
            }
        }
    }
};