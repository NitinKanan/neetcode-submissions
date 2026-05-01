class Solution {
public:
    int findMin(vector<int> &nums) {
        int res = nums[0];
        int l = 0, h = nums.size() - 1;
        while (l <= h) {
            if (nums[l] <= nums[h]) {
                res = min(res, nums[l]);
                break;
            }
            int m = l + (h - l)/ 2;
            res = nums[m];
            if (nums[m] >= nums[l]) {
                l = m + 1;
            }
            else {
                h = m - 1;
            }
        }
        return res;
    }
};
