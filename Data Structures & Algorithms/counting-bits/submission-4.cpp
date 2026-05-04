class Solution {
public:
    vector<int> countBits(int n) {
        // this solution also uses dp with another observation
        vector<int> dp(n + 1);
        for (int i = 1; i <= n; i++) {
            dp[i] = dp[i >> 1] + (i & 1);
        }
        return dp;
    }
};
