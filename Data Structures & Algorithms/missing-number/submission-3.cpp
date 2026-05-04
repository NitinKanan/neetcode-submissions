class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // solution using math observation
        int res = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            res += i - nums[i];
        }
        return res;
    }
};
