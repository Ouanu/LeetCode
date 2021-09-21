#include<set>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        set<int> s;
        for(int num:nums){
            flag = s.insert(num).second;
            if(!flag){
                return true;
            }
        }
        return false;
    }
};