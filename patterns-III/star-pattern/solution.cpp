#include<iostream>
using namespace std;

int main() {

    int num;
    cout<<"Enter the number of rows for the pattern: ";
    cin>>num;
    
    // 1st half
    for (int row = num; row>=1; row--) {
        // print star
        for (int cols = 1; cols<=row; cols++){
            cout<<"*";
        }
        // print space
        for (int cols = 1; cols<=2*num-2*row; cols++){
            cout<<" ";
        }
        // print star
        for (int cols = 1; cols<=row; cols++){
            cout<<"*";
        }
        cout << endl;
    }

    // 2nd half
    for (int row = 1; row<=num; row++) {
        // print star
        for (int cols = 1; cols<=row; cols++){
            cout<<"*";
        }
        // print space
        for (int cols = 1; cols<=2*num-2*row; cols++){
            cout<<" ";
        }
        // print star
        for (int cols = 1; cols<=row; cols++){
            cout<<"*";
        }
        cout << endl;
    }

    return 0;
}
