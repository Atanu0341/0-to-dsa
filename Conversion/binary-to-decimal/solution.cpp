#include<iostream>
using namespace std;

int main() {
    int num, rem, ans = 0, multiply = 1;

    cout << "Enter the binary number to convert to decimal: ";
    cin >> num;

    while(num > 0) {
        // remainder
        rem = num % 10;
        // quotient
        num/=10;  //num = num / 10;

        ans = rem * multiply + ans;
        multiply*=2;  //multiply = multiply * 2;
    }

    cout << "The decimal equivalent is: " << ans << endl;
    return 0;
}