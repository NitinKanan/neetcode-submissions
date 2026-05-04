class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // this solution uses sorting
        // sort the array
        sort(nums.begin(), nums.end());
        // store the size of the array in a variable for the iteration purpose
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] != i) return i;
        }
        return n;
        // this solution is a O(nlogn) time complexity and O(1) or O(n) space complexity depending on the sorting algorithm
        // for the time complexity n for the for loop traversal and logn for the sorting algorithm
    }
};
