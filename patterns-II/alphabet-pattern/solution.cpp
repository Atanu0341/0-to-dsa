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
        for(char name = 'A'; name<='A'+row-1; name++){
            cout<<name;
        }
        cout<<endl;
    }

    return 0;
}
