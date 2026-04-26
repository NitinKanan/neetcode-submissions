class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // solution using prefix and suffix sum
        int n = nums.size();
        vector<int> preff(n);
        vector<int> suff(n);
        vector<int> res(n);

        preff[0] = 1;
        suff[n-1] = 1;

        for (int i = 1; i < n; i++) {
            preff[i] = preff[i - 1] * nums[i - 1];
        }

        for (int i = n - 2; i >= 0; i--) {
            suff[i] = suff[i + 1] * nums[i + 1];
        }

        for (int i = 0; i < n; i++) {
            res[i] = preff[i] * suff[i];
        }

        return res;
    }
};
