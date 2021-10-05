class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        // set<int> s;
        // sort(nums.begin(), nums.end());
        // for(int n:nums){
        //     if(!s.insert(n).second){
        //         return n;
        //     }
        // }
        sort(nums.begin(), nums.end());
        for(int x=0, y=1; x<nums.size()&&y<nums.size();){
            if(nums[x] != nums[y]){
                x = y;
                y += 1;
            } else {
                return nums[x];
            }
        }
        return 0;
    }
};