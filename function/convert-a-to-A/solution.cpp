#include<iostream>
using namespace std;

char convert(char name) {
    char ans = name - 'a' + 'A';
    return ans;
}

int main() {
    char name;
    cout << "Enter a small letter: ";
    cin >> name;
    cout << "The capital letter is: " << convert(name)<< endl;

    return 0;
}