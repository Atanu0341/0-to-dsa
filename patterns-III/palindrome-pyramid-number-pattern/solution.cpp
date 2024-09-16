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
            cout<<cols;
        }

        for(int cols = row-1; cols>=1; cols--){
            cout<<cols;
        }

        cout<<endl;
    }

    return 0;
}