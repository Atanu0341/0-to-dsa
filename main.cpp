class Solution {
public:
    int findComplement(int num) {
        int ans = 0;
        long long multiply = 1;

        if (num == 0) {
            return 1;
        }

        while (num != 0) {
            int rem = num % 2;
            rem ^= 1; // Flip the bit
            num /= 2;

            // Adding to ans while preserving the bit-wise placement
            ans += rem * multiply;
            multiply *= 2;
        }
        return ans;  
    }
};
