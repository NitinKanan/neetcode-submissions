class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // store the array in an unordered_set
        unordered_set<int> store(nums.begin(), nums.end());
        int res = 0;
        for (int num : nums) {
            int streak = 0, curr = num;
            while (store.find(curr) != store.end()) {
                streak++;
                curr++;
            }
            res = max(res, streak);
        }
        return res;
    }
};
