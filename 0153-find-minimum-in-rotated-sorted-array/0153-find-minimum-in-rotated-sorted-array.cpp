class Solution {
public:
    int findMin(vector<int>& nums) {
         int n = nums.size();
        int start = 0, end = n - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] > nums[end]) {
                // Minimum lies in the right half
                start = mid + 1;
            } else {
                // Minimum lies in the left half (including mid)
                end = mid;
            }
        }
        // At the end, start == end, pointing to the minimum
        return nums[start];  
    }  
};