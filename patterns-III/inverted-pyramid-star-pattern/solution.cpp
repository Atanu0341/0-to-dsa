#include<iostream>
using namespace std;

int main() {

    int num;
    cout<<"Enter the number of rows for the pattern: ";
    cin>>num;
    
    for (int row = num; row>=1; row--) {
        for (int cols = 1; cols <= num - row; cols++) {
            cout<<" ";
        }
        for (int cols = 1; cols <= 2*row-1; cols++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
