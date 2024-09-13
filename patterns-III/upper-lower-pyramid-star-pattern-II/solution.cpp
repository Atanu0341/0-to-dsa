#include<iostream>
using namespace std;

int main() {

    int num;
    cout<<"Enter the number of rows for the pattern: ";
    cin>>num;
    
    for(int row = 1; row<=num; row++){
        // space print
        for(int cols = 1; cols<=num-row; cols++){
            cout<<" ";
        }
        // star print
        for(int cols = 1; cols<=row; cols++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    // Lower triangle (excluding the middle row)
    for (int row = num; row>=1; row--) {
        for (int cols = 1; cols <= num - row; cols++) {
            cout<<" ";
        }
        for (int cols = 1; cols <= row; cols++) {
            cout << "*"<<" ";
        }
        cout << endl;
    }

    return 0;
}
