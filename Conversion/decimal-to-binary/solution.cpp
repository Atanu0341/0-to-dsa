#include <iostream>
using namespace std;

int main()
{
    int num, rem, ans = 0, multiply = 1;

    cout << "Enter the number to convert to binary : ";
    cin >> num;

    while (num > 0)
    {
        // remainder
        rem = num % 2;
        // quotient
        num /= 2; // num = num / 2;

        ans = rem * multiply + ans;
        multiply *= 10; // multiply = multiply * 10;
    }

    cout << "The binary number is : " << ans << endl;
    return 0;
}