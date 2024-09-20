#include<iostream>
#include <cmath>
using namespace std;

int countDigit(int n) {
    int count = 0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}

bool armstrong(int num, int digit) {
    int n = num, ans = 0, rem;
    while(n){
        rem = n%10;
        n/=10;
        ans = ans + pow(rem, digit);
    }

    return ans == num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    // count the number of digits in the number
    int digit = countDigit(num);

    // check if the number is armstrong number or not
    cout<<(armstrong(num, digit) ? "Armstrong Number" : "Not an Armstrong Number")<<endl;
    return 0;
}