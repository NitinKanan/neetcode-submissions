class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sorting approach
        // define a vector of pair to store the nums
        vector<pair<int, int>> A;
        // store nums
        for (int i = 0; i < nums.size(); i++) A.push_back({nums[i], i});
        // sort the vector -> takes O(n log n)
        sort(A.begin(), A.end());
        // apply two pointer approach
        int i = 0;
        int j = nums.size() - 1;
        while (i < j) {
            if (A[i].first + A[j].first == target) return {min(A[i].second, A[j].second), max(A[i].second, A[j].second)};
            else if (A[i].first + A[j].first < target) i++;
            else j--;
        }
        return {};
    }
};
