class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                nums[++i] = nums[j]; // Move i first, then update
            }
        }
        return i + 1; // Length of unique portion
    }
};

// TC = O(n)
// SC = O(1)