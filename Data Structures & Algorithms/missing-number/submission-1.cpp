class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // this solution uses set (unordered_set)
        // store all the elements of nums in the set
        // unordered_set will store all the unique elements and it is used for faster lookup, deletion and insertion
        unordered_set<int> numSet(nums.begin(), nums.end());
        int n = nums.size();
        // iterate through each elements of nums
        for (int i = 0; i <= n; i++) {
            // check if the element i is present in the set, if not return the element
            if (numSet.find(i) == numSet.end()) return i;
        }
        // dummy return since it's gaurenteed that there is 1 missing number
        return -1;
    }
};
// time complexity of this solution: O(n) since we are iterating through the array only once
// space complexity: O(n) size of the set used
