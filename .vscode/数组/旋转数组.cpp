class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size() == k){
            return;
        }
        if(nums.size() < k){
            k %= nums.size();   
        }
        reverse(nums, 0, nums.size()-1);    //整体反转
        reverse(nums, 0, k-1);              //反转k之前的
        reverse(nums, k, nums.size()-1);    //反转k之后的
        
    }
    void reverse(vector<int>& nums, int begin, int end) {
        for(begin, end; begin<end; ++begin, --end){
            swap(nums[begin], nums[end]);
        }
    }
};