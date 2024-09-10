#include <iostream>
using namespace std;

int main() {
    int num, first = 0, second = 1, current;
    cout << "Enter the number : ";
    cin >> num;
    
    if (num == 1) {
        cout << first << endl;
    } else if (num == 2) {
        cout << first << endl << second << endl;
    } else {
        cout << first << endl << second << endl;
        for (int i = 3; i <= num; ++i) {
            current = first + second;  // Compute the next Fibonacci number
            // Update the values
            first = second;
            second = current;
            cout << current << endl;
        }
    }

    return 0;
}
