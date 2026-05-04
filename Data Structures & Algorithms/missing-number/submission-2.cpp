class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // xorr solution
        int n = nums.size();
        int xorr = n;
        for (int i = 0; i < n; i++) {
            xorr ^= i ^ nums[i];
        }
        return xorr;
        // time and space complexity O(n) and O(1) respectively
    }
};
