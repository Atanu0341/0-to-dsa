#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int c;
    c = a;
    a = b;
    b = c;
}
int main() {
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    swap(a, b);
    cout << "a is " << a << endl;
    cout << "b is " << b << endl;
    return 0;
}