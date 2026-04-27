class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> store(nums.begin(), nums.end());
        int result = 0;
        for (int num : store) {
            if (store.find(num - 1) == store.end()) {
                int length = 1, streak = 1;
                while (store.find(num + length) != store.end()) {
                    streak++;
                    length++;
                }
                result = max(result, streak);
            }
        }
        return result;
    }
};
