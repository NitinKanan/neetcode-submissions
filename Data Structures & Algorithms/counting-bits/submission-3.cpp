class Solution {
public:
    vector<int> countBits(int n) {
        // this is the solution using dynamic programming approach (reuse what has already been solved)
        // initialise a result vector of size n + 1. note: if elements are not explicitly defined and size is defined then each elements of the vector will automatically be 0 internally so no need to initilaise dp[0] = 0;
        vector<int> dp(n + 1);
        int offset = 1;
        // iterate through each number between 1 to n
        for (int i = 1; i <= n; i++) {
            // update offset with i if i is the power of 2
            if (i == offset * 2) offset = i;
            dp[i] = 1 + dp[i - offset];
        }
        return dp;
    }
};
