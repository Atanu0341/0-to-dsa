#include<iostream>
using namespace std;

int main() {
    
     for(int row = 1; row<=5; row++){
        for(int cols = 1; cols<=row; cols++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}
