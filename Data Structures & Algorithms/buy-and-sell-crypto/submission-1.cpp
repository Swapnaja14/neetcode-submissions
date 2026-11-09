class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;
        int l=0, r=1;

        while (r < n) {
            if (prices[l] < prices[r]) {
                int p = prices[r] - prices[l];
                maxProfit = max(maxProfit, p);
            }
            else {
                l = r;
            }
            r++;
        }
        return maxProfit;
    }
};
