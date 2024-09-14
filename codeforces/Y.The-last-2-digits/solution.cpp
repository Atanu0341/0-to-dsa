#include<iostream>
using namespace std;

int main() {
    long long a, b, c, d , result;
    cin >> a >> b >> c >> d;

    result = (a % 100) * (b % 100) * (c % 100) * (d % 100) % 100;

    if (result < 10) {
        cout << "0" << result << endl;
    } else {
        cout << result << endl;
    }

    return 0;
}