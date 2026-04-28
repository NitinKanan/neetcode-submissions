class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // sort the nums to avoid the duplicates
        sort(nums.begin(), nums.end());
        // count the frequency of the num in nums
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        // create a vector of vectors to store the result
        vector<vector<int>> res;
        // iterate through the num of nums
        for (int i = 0; i < nums.size(); i++) {
            count[nums[i]]--;
            // avoid duplicates by checking if the previous num is same and if it does skip it
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < nums.size(); j++) {
                count[nums[j]]--;
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                int target = -(nums[i] + nums[j]);
                if (count[target] > 0) res.push_back({nums[i], nums[j], target});
            }
            for (int j = i + 1; j < nums.size(); j++) {
                count[nums[j]]++;
            }
        }
        return res;
    }
};
