class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // better brute force
        int n = nums.size();
        int prod = 1;
        int zeroes = 0;
        for (int num : nums) {
            if (num != 0) {
                prod *= num;
            }
            else zeroes++;
        }
        if (zeroes > 1) {
            return vector<int> (n, 0);
        }
        vector<int> result(n);
        for (size_t i = 0; i < n; i++) {
            if (zeroes > 0) {
                result[i] = (nums[i] == 0) ? prod : 0;
            }
            else result[i] = prod / nums[i];
        }
        return result;
    }
};
