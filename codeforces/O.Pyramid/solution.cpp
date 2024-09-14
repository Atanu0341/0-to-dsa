#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int row = 1; row<=n; row++){
        for(int cols = 1; cols<=row; cols++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}