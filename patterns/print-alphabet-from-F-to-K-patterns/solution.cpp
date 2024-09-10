#include<iostream>
using namespace std;

int main() {
    for(int row = 1; row<=5; row++){

        for(char cols = 'F'; cols<='K'; cols++){
            cout<<cols<<" ";
        }
        cout<<endl;
    }
    return 0;
}