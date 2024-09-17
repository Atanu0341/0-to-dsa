// LeetCode Solution

/*
class Solution {
public:
    bool isPalindrome(int x) {
        int ans = 0, num = x, rem;
        if(x<0){
            return false;
        }

        while(num!=0){
            rem = num % 10;
            num/=10;

            if(ans>INT_MAX/10){
                return false;
            }

            ans = ans * 10 + rem;
        }

        if(x==ans){
            return true;
        }else{
            return false;
        }

    }
};
*/

// Standalone Implementation

#include <iostream>
#include <climits>
using namespace std;

bool isPalindrome(int x)
{
    int ans = 0, num = x, rem;
    if (x < 0)
    {
        return false;
    }

    while (num != 0)
    {
        rem = num % 10;
        num /= 10;

        if (ans > INT_MAX / 10)
        {
            return false;
        }

        ans = ans * 10 + rem;
    }

    if (x == ans)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << (isPalindrome(x) ? "Palindrome" : "Not Palindrome");
}