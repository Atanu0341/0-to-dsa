// Leetcode Solution

/*
class Solution {
public:
    int findComplement(int num) {
        int ans = 0, rem;
        long long multiply = 1;

        if (num == 0) {
            return 1;
        }

        while (num != 0) {
            rem = num % 2;
            rem ^= 1; // Flip the bit
            num /= 2;

            // Adding to ans while preserving the bit-wise placement
            ans = rem * multiply + ans;
            multiply *= 2;
        }
        return ans;  
    }
};
*/

// Standalone Implementation

#include<iostream>
using namespace std;

int findComplement(int num) {
    int ans = 0, rem;
    long long multiply = 1;

    if (num == 0) {
        return 1;
    }

    while (num != 0) {
        rem = num % 2;
        rem ^= 1; // Flip the bit
        num /= 2;

        // Adding to ans while preserving the bit-wise placement
        ans = rem * multiply + ans;
        multiply *= 2;
    }
    return ans;  
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The complement of " << n << " is " << findComplement(n) << endl;
    return 0;
}

