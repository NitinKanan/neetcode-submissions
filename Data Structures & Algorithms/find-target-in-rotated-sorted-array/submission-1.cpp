class Solution {
public:
    int search(vector<int>& nums, int target) {
        // find the pivot
        int l = 0, h = nums.size() - 1;
        while (l < h) {
            int m = l + (h - l) / 2;
            if (nums[m] > nums[h]) {
                l = m + 1;
            }
            else {
                h = m;
            }
        }
        int pivot = l;
        int result = binarySearch(nums, target, 0, pivot - 1);
        if (result != -1) {
            return result;
        }

        return binarySearch(nums, target, pivot, nums.size() - 1);
    }

    int binarySearch(vector<int> & nums, int target, int left, int right) {
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            else if (nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return -1;
    }
};
