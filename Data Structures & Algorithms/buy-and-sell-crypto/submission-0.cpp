class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = INT_MIN;
        for (int i=0; i<prices.size(); i++) {
            for (int j=i+1; j<prices.size(); j++) {
                maxProfit = max(maxProfit, prices[j]-prices[i]);
            }
        }
        return (maxProfit > 0 ? maxProfit : 0);
    }
};
