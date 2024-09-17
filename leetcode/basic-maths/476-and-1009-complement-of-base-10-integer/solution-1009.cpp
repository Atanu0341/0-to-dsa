// Leetcode Solution

/*
class Solution {
public:
    int bitwiseComplement(int n) {
        int ans = 0, rem, multiply = 1;

        if(n==0){
            return 1;
        }

        while(n!=0){
            rem = n % 2;
            rem^=1; //0^1=1, 1^1=1 (XOR)
            n/=2;

            ans = rem * multiply + ans;
            multiply*=2;
        }
        return ans;
    }
};
*/

// Standalone Implementation

#include<iostream>
using namespace std;

int bitwiseComplement(int n) {
    int ans = 0, rem, multiply = 1;

    if(n==0){
        return 1;
    }

    while(n!=0){
        rem = n % 2;
        rem^=1; //0^1=1, 1^1=1 (XOR)
        n/=2;

        ans = rem * multiply + ans;
        multiply*=2;
    }
    return ans;
} 

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The complement of " << n << " is " << bitwiseComplement(n) << endl;
    return 0;
}