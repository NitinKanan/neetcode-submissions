class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // DP solution
        int maxP = 0; // choice of not selling at all
        int minBuy = prices[0];
        for (int& sell : prices) {
            maxP = max(maxP, sell - minBuy);
            minBuy = min(minBuy, sell);
        }
        return maxP;
    }
};
