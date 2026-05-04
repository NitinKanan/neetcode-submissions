class Solution {
public:
    vector<int> countBits(int n) {
        // this solution uses built in C++ function to count the set bits in a number n
        vector<int> res(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            res[i] = __builtin_popcount(i);
        }
        return res;
    }
};
// this is the most readable and easy to understand solution
