#include<vector>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty() || prices.size() == 0){
            return 0;
        }
        int length = prices.size();
        int hold = -prices[0];
        int noHold = 0;
        for (int i = 1; i < length; i++)
        {
            noHold = max(noHold, hold + prices[i]);
            hold = max(hold, -prices[i]);
        }
        return noHold;
    }
};