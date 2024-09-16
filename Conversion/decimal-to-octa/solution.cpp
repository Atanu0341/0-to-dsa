#include<iostream>
using namespace std;

int main() {
    int num, rem, ans = 0, multiply = 1;

    cout << "Enter the decimal number to convert to octal: ";
    cin >> num;

    while(num > 0) {
        rem = num % 8;
        num = num / 8;

        ans = rem * multiply + ans;
        multiply = multiply * 10;
    }

    cout << "The octal equivalent is: " << ans << endl;
    return 0;
}