// better solution
// tc=o(m+n)
// sc=o(m+n)  


/*
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> merged(m + n);
        int i = 0, j = 0, k = 0;
        
        // Merge elements from nums1 and nums2 in sorted order
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                merged[k++] = nums1[i++];
            } else {
                merged[k++] = nums2[j++];
            }
        }
        
        // If any elements remain in nums1, add them to merged
        while (i < m) {
            merged[k++] = nums1[i++];
        }
        
        // If any elements remain in nums2, add them to merged
        while (j < n) {
            merged[k++] = nums2[j++];
        }
        
        // Copy merged array back into nums1
        nums1 = merged;
    }
};
*/

// optimized solution
// tc = o(m+n)
// sc = o(1)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;         // Points to the last initialized element in nums1
        int j = n - 1;         // Points to the last element in nums2
        int k = m + n - 1;     // Points to the last index of nums1 (including extra space)

        // Merge nums1 and nums2 starting from the end
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];  // Place the larger value at the current end
            } else {
                nums1[k--] = nums2[j--];  // Place nums2[j] if it's greater or equal
            }
        }

        // If nums2 still has elements left, copy them
        // (Remaining nums1 elements are already in place, so no need to copy them)
        while (j >= 0) {
            nums1[k--] = nums2[j--];
        }
    }
};