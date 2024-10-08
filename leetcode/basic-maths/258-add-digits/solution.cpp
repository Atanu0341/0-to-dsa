// LeetCode Solution

/*
class Solution {
public:
    int addDigits(int num) {
        while (num > 9) {
            int ans = 0, rem;
            while (num != 0) {
                rem = num % 10;
                num /= 10;
                ans += rem;
            }
            num = ans;
        }
        return num;
    }
};
*/

// Standalone Implementation

#include<iostream>
using namespace std;

int addDigits(int num) {
    while (num > 9) {
        int ans = 0, rem;
        while (num != 0) {
            rem = num % 10;
            num /= 10;
            ans += rem;
        }
        num = ans;
    }
    return num;
}

int main() {
    int num;
    cout<<"Enter number : ";
    cin>>num;

    cout<<addDigits(num);
    return 0;
}
