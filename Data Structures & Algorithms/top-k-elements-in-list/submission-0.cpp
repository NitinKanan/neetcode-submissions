class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (auto num : nums) count[num]++;
        vector<pair<int, int>> arr;
        for (const auto& a : count) arr.push_back({a.second, a.first});
        sort(arr.rbegin(), arr.rend());
        vector<int> result;
        for (int i = 0; i < k; i++) result.push_back(arr[i].second);
        return result;
    }
};
